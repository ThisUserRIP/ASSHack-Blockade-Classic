#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Utilities_Pack.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Utilities", "Pack");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt16_To_BE(uint16_t n, IL2CPP::Array<uint8_t>* bs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt16_To_BE", std::vector<std::string> { "System.UInt16", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&n;
	params[1] = (intptr_t)bs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt16_To_BE(uint16_t n, IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt16_To_BE", std::vector<std::string> { "System.UInt16", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&n;
	params[1] = (intptr_t)bs;
	params[2] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint16_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt16(IL2CPP::Array<uint8_t>* bs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BE_To_UInt16", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)bs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint16_t ret;
		std::memset(&ret, 0, sizeof(uint16_t));
		return ret;
	}
	return static_cast<uint16_t>(*(uint16_t*)il2cpp_object_unbox(returnValue));
}
uint16_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt16(IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BE_To_UInt16", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bs;
	params[1] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint16_t ret;
		std::memset(&ret, 0, sizeof(uint16_t));
		return ret;
	}
	return static_cast<uint16_t>(*(uint16_t*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_BE(uint32_t n)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt32_To_BE", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&n;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_BE(uint32_t n, IL2CPP::Array<uint8_t>* bs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt32_To_BE", std::vector<std::string> { "System.UInt32", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&n;
	params[1] = (intptr_t)bs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_BE(uint32_t n, IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt32_To_BE", std::vector<std::string> { "System.UInt32", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&n;
	params[1] = (intptr_t)bs;
	params[2] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_BE(IL2CPP::Array<uint32_t>* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt32_To_BE", std::vector<std::string> { "System.UInt32[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_BE(IL2CPP::Array<uint32_t>* ns, IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt32_To_BE", std::vector<std::string> { "System.UInt32[]", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)ns;
	params[1] = (intptr_t)bs;
	params[2] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt32(IL2CPP::Array<uint8_t>* bs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BE_To_UInt32", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)bs;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt32(IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BE_To_UInt32", std::vector<std::string> { "System.Byte[]", "System.Int32" });
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
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt32(IL2CPP::Array<uint8_t>* bs, int32_t off, IL2CPP::Array<uint32_t>* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BE_To_UInt32", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)bs;
	params[1] = (intptr_t)&off;
	params[2] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_BE(uint64_t n)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt64_To_BE", std::vector<std::string> { "System.UInt64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&n;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_BE(uint64_t n, IL2CPP::Array<uint8_t>* bs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt64_To_BE", std::vector<std::string> { "System.UInt64", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&n;
	params[1] = (intptr_t)bs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_BE(uint64_t n, IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt64_To_BE", std::vector<std::string> { "System.UInt64", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&n;
	params[1] = (intptr_t)bs;
	params[2] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_BE(IL2CPP::Array<uint64_t>* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt64_To_BE", std::vector<std::string> { "System.UInt64[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_BE(IL2CPP::Array<uint64_t>* ns, IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt64_To_BE", std::vector<std::string> { "System.UInt64[]", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)ns;
	params[1] = (intptr_t)bs;
	params[2] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint64_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt64(IL2CPP::Array<uint8_t>* bs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BE_To_UInt64", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)bs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
uint64_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt64(IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BE_To_UInt64", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bs;
	params[1] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt64(IL2CPP::Array<uint8_t>* bs, int32_t off, IL2CPP::Array<uint64_t>* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BE_To_UInt64", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.UInt64[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)bs;
	params[1] = (intptr_t)&off;
	params[2] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt16_To_LE(uint16_t n, IL2CPP::Array<uint8_t>* bs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt16_To_LE", std::vector<std::string> { "System.UInt16", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&n;
	params[1] = (intptr_t)bs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt16_To_LE(uint16_t n, IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt16_To_LE", std::vector<std::string> { "System.UInt16", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&n;
	params[1] = (intptr_t)bs;
	params[2] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint16_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt16(IL2CPP::Array<uint8_t>* bs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LE_To_UInt16", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)bs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint16_t ret;
		std::memset(&ret, 0, sizeof(uint16_t));
		return ret;
	}
	return static_cast<uint16_t>(*(uint16_t*)il2cpp_object_unbox(returnValue));
}
uint16_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt16(IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LE_To_UInt16", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bs;
	params[1] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint16_t ret;
		std::memset(&ret, 0, sizeof(uint16_t));
		return ret;
	}
	return static_cast<uint16_t>(*(uint16_t*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_LE(uint32_t n)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt32_To_LE", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&n;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_LE(uint32_t n, IL2CPP::Array<uint8_t>* bs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt32_To_LE", std::vector<std::string> { "System.UInt32", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&n;
	params[1] = (intptr_t)bs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_LE(uint32_t n, IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt32_To_LE", std::vector<std::string> { "System.UInt32", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&n;
	params[1] = (intptr_t)bs;
	params[2] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_LE(IL2CPP::Array<uint32_t>* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt32_To_LE", std::vector<std::string> { "System.UInt32[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_LE(IL2CPP::Array<uint32_t>* ns, IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt32_To_LE", std::vector<std::string> { "System.UInt32[]", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)ns;
	params[1] = (intptr_t)bs;
	params[2] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt32(IL2CPP::Array<uint8_t>* bs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LE_To_UInt32", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)bs;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt32(IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LE_To_UInt32", std::vector<std::string> { "System.Byte[]", "System.Int32" });
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
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt32(IL2CPP::Array<uint8_t>* bs, int32_t off, IL2CPP::Array<uint32_t>* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LE_To_UInt32", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)bs;
	params[1] = (intptr_t)&off;
	params[2] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt32(IL2CPP::Array<uint8_t>* bs, int32_t bOff, IL2CPP::Array<uint32_t>* ns, int32_t nOff, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LE_To_UInt32", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.UInt32[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)bs;
	params[1] = (intptr_t)&bOff;
	params[2] = (intptr_t)ns;
	params[3] = (intptr_t)&nOff;
	params[4] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint32_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt32(IL2CPP::Array<uint8_t>* bs, int32_t off, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LE_To_UInt32", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)bs;
	params[1] = (intptr_t)&off;
	params[2] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint32_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_LE(uint64_t n)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt64_To_LE", std::vector<std::string> { "System.UInt64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&n;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_LE(uint64_t n, IL2CPP::Array<uint8_t>* bs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt64_To_LE", std::vector<std::string> { "System.UInt64", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&n;
	params[1] = (intptr_t)bs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_LE(uint64_t n, IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt64_To_LE", std::vector<std::string> { "System.UInt64", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&n;
	params[1] = (intptr_t)bs;
	params[2] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_LE(IL2CPP::Array<uint64_t>* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt64_To_LE", std::vector<std::string> { "System.UInt64[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_LE(IL2CPP::Array<uint64_t>* ns, IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt64_To_LE", std::vector<std::string> { "System.UInt64[]", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)ns;
	params[1] = (intptr_t)bs;
	params[2] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_LE(IL2CPP::Array<uint64_t>* ns, int32_t nsOff, int32_t nsLen, IL2CPP::Array<uint8_t>* bs, int32_t bsOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UInt64_To_LE", std::vector<std::string> { "System.UInt64[]", "System.Int32", "System.Int32", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)ns;
	params[1] = (intptr_t)&nsOff;
	params[2] = (intptr_t)&nsLen;
	params[3] = (intptr_t)bs;
	params[4] = (intptr_t)&bsOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint64_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt64(IL2CPP::Array<uint8_t>* bs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LE_To_UInt64", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)bs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
uint64_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt64(IL2CPP::Array<uint8_t>* bs, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LE_To_UInt64", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bs;
	params[1] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt64(IL2CPP::Array<uint8_t>* bs, int32_t off, IL2CPP::Array<uint64_t>* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LE_To_UInt64", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.UInt64[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)bs;
	params[1] = (intptr_t)&off;
	params[2] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt64(IL2CPP::Array<uint8_t>* bs, int32_t bsOff, IL2CPP::Array<uint64_t>* ns, int32_t nsOff, int32_t nsLen)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LE_To_UInt64", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.UInt64[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)bs;
	params[1] = (intptr_t)&bsOff;
	params[2] = (intptr_t)ns;
	params[3] = (intptr_t)&nsOff;
	params[4] = (intptr_t)&nsLen;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
