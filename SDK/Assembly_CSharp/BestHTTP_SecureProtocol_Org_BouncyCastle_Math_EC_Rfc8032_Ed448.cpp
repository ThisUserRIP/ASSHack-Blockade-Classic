#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Rfc8032_Ed448.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Rfc8032", "Ed448");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CalculateS(IL2CPP::Array<uint8_t>* r, IL2CPP::Array<uint8_t>* k, IL2CPP::Array<uint8_t>* s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateS", std::vector<std::string> { "System.Byte[]", "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)r;
	params[1] = (intptr_t)k;
	params[2] = (intptr_t)s;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckContextVar(IL2CPP::Array<uint8_t>* ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckContextVar", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ctx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPointVar(IL2CPP::Array<uint8_t>* p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckPointVar", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)p;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckScalarVar(IL2CPP::Array<uint8_t>* s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckScalarVar", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)s;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IXof* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CreatePrehash()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreatePrehash");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IXof*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IXof* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CreateXof()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateXof");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IXof*)returnValue;
}
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode16(IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Decode16", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bs;
	params[1] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode24(IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Decode24", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bs;
	params[1] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode32(IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Decode32", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bs;
	params[1] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode32(IL2CPP::Array<uint8_t>* bs, int32_t bsOff, IL2CPP::Array<uint32_t>* n, int32_t nOff, int32_t nLen)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Decode32", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.UInt32[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)bs;
	params[1] = (intptr_t)&bsOff;
	params[2] = (intptr_t)n;
	params[3] = (intptr_t)&nOff;
	params[4] = (intptr_t)&nLen;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::DecodePointVar(IL2CPP::Array<uint8_t>* p, int32_t pOff, bool negate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* r)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecodePointVar", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Boolean", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)&pOff;
	params[2] = (intptr_t)&negate;
	params[3] = (intptr_t)r;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::DecodeScalar(IL2CPP::Array<uint8_t>* k, int32_t kOff, IL2CPP::Array<uint32_t>* n)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecodeScalar", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)k;
	params[1] = (intptr_t)&kOff;
	params[2] = (intptr_t)n;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Dom4(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IXof* d, uint8_t x, IL2CPP::Array<uint8_t>* y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dom4", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IXof", "System.Byte", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)d;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)y;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode24(uint32_t n, IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Encode24", std::vector<std::string> { "System.UInt32", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&n;
	params[1] = (intptr_t)bs;
	params[2] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode32(uint32_t n, IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Encode32", std::vector<std::string> { "System.UInt32", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&n;
	params[1] = (intptr_t)bs;
	params[2] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode56(uint64_t n, IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Encode56", std::vector<std::string> { "System.UInt64", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&n;
	params[1] = (intptr_t)bs;
	params[2] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::EncodePoint(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* p, IL2CPP::Array<uint8_t>* r, int32_t rOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncodePoint", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)r;
	params[2] = (intptr_t)&rOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GeneratePrivateKey(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random, IL2CPP::Array<uint8_t>* k)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GeneratePrivateKey", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)random;
	params[1] = (intptr_t)k;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GeneratePublicKey(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GeneratePublicKey", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)sk;
	params[1] = (intptr_t)&skOff;
	params[2] = (intptr_t)pk;
	params[3] = (intptr_t)&pkOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<int8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GetWnaf(IL2CPP::Array<uint32_t>* n, int32_t width)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetWnaf", std::vector<std::string> { "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)n;
	params[1] = (intptr_t)&width;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int8_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IXof* d, IL2CPP::Array<uint8_t>* h, IL2CPP::Array<uint8_t>* s, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, uint8_t phflag, IL2CPP::Array<uint8_t>* m, int32_t mOff, int32_t mLen, IL2CPP::Array<uint8_t>* sig, int32_t sigOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImplSign", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IXof", "System.Byte[]", "System.Byte[]", "System.Byte[]", "System.Int32", "System.Byte[]", "System.Byte", "System.Byte[]", "System.Int32", "System.Int32", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[12];
	params[0] = (intptr_t)d;
	params[1] = (intptr_t)h;
	params[2] = (intptr_t)s;
	params[3] = (intptr_t)pk;
	params[4] = (intptr_t)&pkOff;
	params[5] = (intptr_t)ctx;
	params[6] = (intptr_t)&phflag;
	params[7] = (intptr_t)m;
	params[8] = (intptr_t)&mOff;
	params[9] = (intptr_t)&mLen;
	params[10] = (intptr_t)sig;
	params[11] = (intptr_t)&sigOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* ctx, uint8_t phflag, IL2CPP::Array<uint8_t>* m, int32_t mOff, int32_t mLen, IL2CPP::Array<uint8_t>* sig, int32_t sigOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImplSign", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte[]", "System.Byte", "System.Byte[]", "System.Int32", "System.Int32", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)sk;
	params[1] = (intptr_t)&skOff;
	params[2] = (intptr_t)ctx;
	params[3] = (intptr_t)&phflag;
	params[4] = (intptr_t)m;
	params[5] = (intptr_t)&mOff;
	params[6] = (intptr_t)&mLen;
	params[7] = (intptr_t)sig;
	params[8] = (intptr_t)&sigOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, uint8_t phflag, IL2CPP::Array<uint8_t>* m, int32_t mOff, int32_t mLen, IL2CPP::Array<uint8_t>* sig, int32_t sigOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImplSign", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte[]", "System.Int32", "System.Byte[]", "System.Byte", "System.Byte[]", "System.Int32", "System.Int32", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)sk;
	params[1] = (intptr_t)&skOff;
	params[2] = (intptr_t)pk;
	params[3] = (intptr_t)&pkOff;
	params[4] = (intptr_t)ctx;
	params[5] = (intptr_t)&phflag;
	params[6] = (intptr_t)m;
	params[7] = (intptr_t)&mOff;
	params[8] = (intptr_t)&mLen;
	params[9] = (intptr_t)sig;
	params[10] = (intptr_t)&sigOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplVerify(IL2CPP::Array<uint8_t>* sig, int32_t sigOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, uint8_t phflag, IL2CPP::Array<uint8_t>* m, int32_t mOff, int32_t mLen)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImplVerify", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte[]", "System.Int32", "System.Byte[]", "System.Byte", "System.Byte[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)sig;
	params[1] = (intptr_t)&sigOff;
	params[2] = (intptr_t)pk;
	params[3] = (intptr_t)&pkOff;
	params[4] = (intptr_t)ctx;
	params[5] = (intptr_t)&phflag;
	params[6] = (intptr_t)m;
	params[7] = (intptr_t)&mOff;
	params[8] = (intptr_t)&mLen;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointAddVar(bool negate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* p, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* r)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PointAddVar", std::vector<std::string> { "System.Boolean", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&negate;
	params[1] = (intptr_t)p;
	params[2] = (intptr_t)r;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointAddPrecomp(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp* p, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* r)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PointAddPrecomp", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointPrecomp", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)r;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointCopy(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PointCopy", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)p;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointDouble(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* r)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PointDouble", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)r;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExtendXY(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PointExtendXY", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)p;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointLookup(int32_t block, int32_t index, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp* p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PointLookup", std::vector<std::string> { "System.Int32", "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointPrecomp" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&block;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)p;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointPrecompVar(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* p, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PointPrecompVar", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointSetNeutral(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PointSetNeutral", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)p;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Precompute()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Precompute");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PruneScalar(IL2CPP::Array<uint8_t>* n, int32_t nOff, IL2CPP::Array<uint8_t>* r)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PruneScalar", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)n;
	params[1] = (intptr_t)&nOff;
	params[2] = (intptr_t)r;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ReduceScalar(IL2CPP::Array<uint8_t>* n)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReduceScalar", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)n;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBase(IL2CPP::Array<uint8_t>* k, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* r)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScalarMultBase", std::vector<std::string> { "System.Byte[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)k;
	params[1] = (intptr_t)r;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBaseEncoded(IL2CPP::Array<uint8_t>* k, IL2CPP::Array<uint8_t>* r, int32_t rOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScalarMultBaseEncoded", std::vector<std::string> { "System.Byte[]", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)k;
	params[1] = (intptr_t)r;
	params[2] = (intptr_t)&rOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBaseXY(IL2CPP::Array<uint8_t>* k, int32_t kOff, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScalarMultBaseXY", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)k;
	params[1] = (intptr_t)&kOff;
	params[2] = (intptr_t)x;
	params[3] = (intptr_t)y;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultStraussVar(IL2CPP::Array<uint32_t>* nb, IL2CPP::Array<uint32_t>* np, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* p, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* r)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScalarMultStraussVar", std::vector<std::string> { "System.UInt32[]", "System.UInt32[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)nb;
	params[1] = (intptr_t)np;
	params[2] = (intptr_t)p;
	params[3] = (intptr_t)r;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Sign(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* ctx, IL2CPP::Array<uint8_t>* m, int32_t mOff, int32_t mLen, IL2CPP::Array<uint8_t>* sig, int32_t sigOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Sign", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte[]", "System.Byte[]", "System.Int32", "System.Int32", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)sk;
	params[1] = (intptr_t)&skOff;
	params[2] = (intptr_t)ctx;
	params[3] = (intptr_t)m;
	params[4] = (intptr_t)&mOff;
	params[5] = (intptr_t)&mLen;
	params[6] = (intptr_t)sig;
	params[7] = (intptr_t)&sigOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Sign(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, IL2CPP::Array<uint8_t>* m, int32_t mOff, int32_t mLen, IL2CPP::Array<uint8_t>* sig, int32_t sigOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Sign", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte[]", "System.Int32", "System.Byte[]", "System.Byte[]", "System.Int32", "System.Int32", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)sk;
	params[1] = (intptr_t)&skOff;
	params[2] = (intptr_t)pk;
	params[3] = (intptr_t)&pkOff;
	params[4] = (intptr_t)ctx;
	params[5] = (intptr_t)m;
	params[6] = (intptr_t)&mOff;
	params[7] = (intptr_t)&mLen;
	params[8] = (intptr_t)sig;
	params[9] = (intptr_t)&sigOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* ctx, IL2CPP::Array<uint8_t>* ph, int32_t phOff, IL2CPP::Array<uint8_t>* sig, int32_t sigOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SignPrehash", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte[]", "System.Byte[]", "System.Int32", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)sk;
	params[1] = (intptr_t)&skOff;
	params[2] = (intptr_t)ctx;
	params[3] = (intptr_t)ph;
	params[4] = (intptr_t)&phOff;
	params[5] = (intptr_t)sig;
	params[6] = (intptr_t)&sigOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, IL2CPP::Array<uint8_t>* ph, int32_t phOff, IL2CPP::Array<uint8_t>* sig, int32_t sigOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SignPrehash", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte[]", "System.Int32", "System.Byte[]", "System.Byte[]", "System.Int32", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)sk;
	params[1] = (intptr_t)&skOff;
	params[2] = (intptr_t)pk;
	params[3] = (intptr_t)&pkOff;
	params[4] = (intptr_t)ctx;
	params[5] = (intptr_t)ph;
	params[6] = (intptr_t)&phOff;
	params[7] = (intptr_t)sig;
	params[8] = (intptr_t)&sigOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* ctx, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IXof* ph, IL2CPP::Array<uint8_t>* sig, int32_t sigOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SignPrehash", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IXof", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)sk;
	params[1] = (intptr_t)&skOff;
	params[2] = (intptr_t)ctx;
	params[3] = (intptr_t)ph;
	params[4] = (intptr_t)sig;
	params[5] = (intptr_t)&sigOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IXof* ph, IL2CPP::Array<uint8_t>* sig, int32_t sigOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SignPrehash", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte[]", "System.Int32", "System.Byte[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IXof", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)sk;
	params[1] = (intptr_t)&skOff;
	params[2] = (intptr_t)pk;
	params[3] = (intptr_t)&pkOff;
	params[4] = (intptr_t)ctx;
	params[5] = (intptr_t)ph;
	params[6] = (intptr_t)sig;
	params[7] = (intptr_t)&sigOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Verify(IL2CPP::Array<uint8_t>* sig, int32_t sigOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, IL2CPP::Array<uint8_t>* m, int32_t mOff, int32_t mLen)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Verify", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte[]", "System.Int32", "System.Byte[]", "System.Byte[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)sig;
	params[1] = (intptr_t)&sigOff;
	params[2] = (intptr_t)pk;
	params[3] = (intptr_t)&pkOff;
	params[4] = (intptr_t)ctx;
	params[5] = (intptr_t)m;
	params[6] = (intptr_t)&mOff;
	params[7] = (intptr_t)&mLen;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::VerifyPrehash(IL2CPP::Array<uint8_t>* sig, int32_t sigOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, IL2CPP::Array<uint8_t>* ph, int32_t phOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerifyPrehash", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte[]", "System.Int32", "System.Byte[]", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)sig;
	params[1] = (intptr_t)&sigOff;
	params[2] = (intptr_t)pk;
	params[3] = (intptr_t)&pkOff;
	params[4] = (intptr_t)ctx;
	params[5] = (intptr_t)ph;
	params[6] = (intptr_t)&phOff;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::VerifyPrehash(IL2CPP::Array<uint8_t>* sig, int32_t sigOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IXof* ph)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerifyPrehash", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte[]", "System.Int32", "System.Byte[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IXof" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)sig;
	params[1] = (intptr_t)&sigOff;
	params[2] = (intptr_t)pk;
	params[3] = (intptr_t)&pkOff;
	params[4] = (intptr_t)ctx;
	params[5] = (intptr_t)ph;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
