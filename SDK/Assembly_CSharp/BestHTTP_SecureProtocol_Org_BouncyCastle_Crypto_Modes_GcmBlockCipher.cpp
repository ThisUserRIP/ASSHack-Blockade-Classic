#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Modes_GcmBlockCipher.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Modes", "GcmBlockCipher");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IBlockCipher" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)c;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* c, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* m)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IBlockCipher", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)c;
	params[1] = (intptr_t)m;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::get_AlgorithmName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AlgorithmName");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetUnderlyingCipher()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUnderlyingCipher");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*)returnValue;
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetBlockSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBlockSize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "System.Boolean", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&forEncryption;
	params[1] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetMac()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMac");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetOutputSize(int32_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOutputSize", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetUpdateOutputSize(int32_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUpdateOutputSize", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessAadByte(uint8_t input)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessAadByte", std::vector<std::string> { "System.Byte" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&input;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessAadBytes(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, int32_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessAadBytes", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)inBytes;
	params[1] = (intptr_t)&inOff;
	params[2] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::InitCipher()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitCipher");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessByte(uint8_t input, IL2CPP::Array<uint8_t>* output, int32_t outOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessByte", std::vector<std::string> { "System.Byte", "System.Byte[]", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&input;
	params[1] = (intptr_t)output;
	params[2] = (intptr_t)&outOff;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessBytes(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t len, IL2CPP::Array<uint8_t>* output, int32_t outOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessBytes", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Byte[]", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)input;
	params[1] = (intptr_t)&inOff;
	params[2] = (intptr_t)&len;
	params[3] = (intptr_t)output;
	params[4] = (intptr_t)&outOff;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoFinal", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)output;
	params[1] = (intptr_t)&outOff;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::Reset(bool clearMac)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&clearMac;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessBlock(IL2CPP::Array<uint8_t>* buf, int32_t bufOff, IL2CPP::Array<uint8_t>* output, int32_t outOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessBlock", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)buf;
	params[1] = (intptr_t)&bufOff;
	params[2] = (intptr_t)output;
	params[3] = (intptr_t)&outOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessPartial(IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len, IL2CPP::Array<uint8_t>* output, int32_t outOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessPartial", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)buf;
	params[1] = (intptr_t)&off;
	params[2] = (intptr_t)&len;
	params[3] = (intptr_t)output;
	params[4] = (intptr_t)&outOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::gHASH(IL2CPP::Array<uint8_t>* Y, IL2CPP::Array<uint8_t>* b, int32_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "gHASH", std::vector<std::string> { "System.Byte[]", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)Y;
	params[1] = (intptr_t)b;
	params[2] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::gHASHBlock(IL2CPP::Array<uint8_t>* Y, IL2CPP::Array<uint8_t>* b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "gHASHBlock", std::vector<std::string> { "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)Y;
	params[1] = (intptr_t)b;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::gHASHBlock(IL2CPP::Array<uint8_t>* Y, IL2CPP::Array<uint8_t>* b, int32_t off)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "gHASHBlock", std::vector<std::string> { "System.Byte[]", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)Y;
	params[1] = (intptr_t)b;
	params[2] = (intptr_t)&off;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::gHASHPartial(IL2CPP::Array<uint8_t>* Y, IL2CPP::Array<uint8_t>* b, int32_t off, int32_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "gHASHPartial", std::vector<std::string> { "System.Byte[]", "System.Byte[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)Y;
	params[1] = (intptr_t)b;
	params[2] = (intptr_t)&off;
	params[3] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetNextCtrBlock(IL2CPP::Array<uint8_t>* block)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNextCtrBlock", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)block;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::CheckStatus()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckStatus");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
