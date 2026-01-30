#include "BestHTTP_Decompression_Zlib_DeflateManager_Config.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateManager_Config::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateManager::GetIl2CppClass(), "Config");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateManager_Config::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateManager_Config::_ctor(int32_t goodLength, int32_t maxLazy, int32_t niceLength, int32_t maxChainLength, Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateFlavor flavor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "BestHTTP.Decompression.Zlib.DeflateFlavor" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&goodLength;
	params[1] = (intptr_t)&maxLazy;
	params[2] = (intptr_t)&niceLength;
	params[3] = (intptr_t)&maxChainLength;
	params[4] = (intptr_t)&flavor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateManager_Config* Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateManager_Config::Lookup(Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Lookup", std::vector<std::string> { "BestHTTP.Decompression.Zlib.CompressionLevel" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&level;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateManager_Config*)returnValue;
}
void Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateManager_Config::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
