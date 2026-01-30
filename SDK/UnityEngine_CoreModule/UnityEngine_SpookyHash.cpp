#include "UnityEngine_SpookyHash.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::SpookyHash::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "SpookyHash");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::SpookyHash::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool UnityEngine_CoreModule::UnityEngine::SpookyHash::AttemptDetectAllowUnalignedRead()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AttemptDetectAllowUnalignedRead");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::SpookyHash::Hash(void* message, uint64_t length, uint64_t* hash1, uint64_t* hash2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Hash", std::vector<std::string> { "System.Void*", "System.UInt64", "System.UInt64*", "System.UInt64*" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)&length;
	params[2] = (intptr_t)hash1;
	params[3] = (intptr_t)hash2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SpookyHash::End(uint64_t* data, uint64_t& h0, uint64_t& h1, uint64_t& h2, uint64_t& h3, uint64_t& h4, uint64_t& h5, uint64_t& h6, uint64_t& h7, uint64_t& h8, uint64_t& h9, uint64_t& h10, uint64_t& h11)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "End", std::vector<std::string> { "System.UInt64*", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&" });
	intptr_t* params = new intptr_t[13];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&h0;
	params[2] = (intptr_t)&h1;
	params[3] = (intptr_t)&h2;
	params[4] = (intptr_t)&h3;
	params[5] = (intptr_t)&h4;
	params[6] = (intptr_t)&h5;
	params[7] = (intptr_t)&h6;
	params[8] = (intptr_t)&h7;
	params[9] = (intptr_t)&h8;
	params[10] = (intptr_t)&h9;
	params[11] = (intptr_t)&h10;
	params[12] = (intptr_t)&h11;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SpookyHash::EndPartial(uint64_t& h0, uint64_t& h1, uint64_t& h2, uint64_t& h3, uint64_t& h4, uint64_t& h5, uint64_t& h6, uint64_t& h7, uint64_t& h8, uint64_t& h9, uint64_t& h10, uint64_t& h11)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndPartial", std::vector<std::string> { "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&" });
	intptr_t* params = new intptr_t[12];
	params[0] = (intptr_t)&h0;
	params[1] = (intptr_t)&h1;
	params[2] = (intptr_t)&h2;
	params[3] = (intptr_t)&h3;
	params[4] = (intptr_t)&h4;
	params[5] = (intptr_t)&h5;
	params[6] = (intptr_t)&h6;
	params[7] = (intptr_t)&h7;
	params[8] = (intptr_t)&h8;
	params[9] = (intptr_t)&h9;
	params[10] = (intptr_t)&h10;
	params[11] = (intptr_t)&h11;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SpookyHash::Rot64(uint64_t& x, int32_t k)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rot64", std::vector<std::string> { "System.UInt64&", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&k;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SpookyHash::Short(void* message, uint64_t length, uint64_t* hash1, uint64_t* hash2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Short", std::vector<std::string> { "System.Void*", "System.UInt64", "System.UInt64*", "System.UInt64*" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)&length;
	params[2] = (intptr_t)hash1;
	params[3] = (intptr_t)hash2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SpookyHash::ShortMix(uint64_t& h0, uint64_t& h1, uint64_t& h2, uint64_t& h3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShortMix", std::vector<std::string> { "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&h0;
	params[1] = (intptr_t)&h1;
	params[2] = (intptr_t)&h2;
	params[3] = (intptr_t)&h3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SpookyHash::ShortEnd(uint64_t& h0, uint64_t& h1, uint64_t& h2, uint64_t& h3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShortEnd", std::vector<std::string> { "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&h0;
	params[1] = (intptr_t)&h1;
	params[2] = (intptr_t)&h2;
	params[3] = (intptr_t)&h3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SpookyHash::Mix(uint64_t* data, uint64_t& s0, uint64_t& s1, uint64_t& s2, uint64_t& s3, uint64_t& s4, uint64_t& s5, uint64_t& s6, uint64_t& s7, uint64_t& s8, uint64_t& s9, uint64_t& s10, uint64_t& s11)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Mix", std::vector<std::string> { "System.UInt64*", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&", "System.UInt64&" });
	intptr_t* params = new intptr_t[13];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&s0;
	params[2] = (intptr_t)&s1;
	params[3] = (intptr_t)&s2;
	params[4] = (intptr_t)&s3;
	params[5] = (intptr_t)&s4;
	params[6] = (intptr_t)&s5;
	params[7] = (intptr_t)&s6;
	params[8] = (intptr_t)&s7;
	params[9] = (intptr_t)&s8;
	params[10] = (intptr_t)&s9;
	params[11] = (intptr_t)&s10;
	params[12] = (intptr_t)&s11;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SpookyHash::memset(void* dst, int32_t value, uint64_t numberOfBytes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "memset", std::vector<std::string> { "System.Void*", "System.Int32", "System.UInt64" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dst;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)&numberOfBytes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SpookyHash::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
