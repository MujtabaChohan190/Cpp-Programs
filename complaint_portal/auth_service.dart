import 'package:supabase_flutter/supabase_flutter.dart';

class AuthService {
  final SupabaseClient _supabase = Supabase.instance.client;

  // 1. SIGN UP (Student Registration)
  Future<void> signUp({
    required String email,
    required String password,
    required String fullName,
  }) async {
    try {
      final AuthResponse res = await _supabase.auth.signUp(
        email: email,
        password: password,
        // This 'data' section tells the database to fill our 'profiles' table
        data: {
          'full_name': fullName,
          'role': 'student', // Default role for app signups
        },
      );
      
      if (res.user == null) throw 'Signup failed';
    } catch (e) {
      throw e.toString();
    }
  }

  // 2. SIGN IN (Login)
  Future<void> signIn(String email, String password) async {
    try {
      await _supabase.auth.signInWithPassword(email: email, password: password);
    } catch (e) {
      throw e.toString();
    }
  }

  // 3. GET CURRENT USER ROLE
  // This helps route the user to Student or Admin dashboard
  Future<String> getUserRole() async {
    final userId = _supabase.auth.currentUser?.id;
    if (userId == null) return 'none';

    final data = await _supabase
        .from('profiles')
        .select('role')
        .eq('id', userId)
        .single();
    
    return data['role'] as String;
  }

  // 4. LOGOUT
  Future<void> signOut() async => await _supabase.auth.signOut();
}
