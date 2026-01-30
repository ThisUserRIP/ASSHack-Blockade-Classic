#include "Ionic_Zlib_DeflateManager_Config.h"

IL2CPP::Il2CppClass* Ionic_Zip::Ionic::Zlib::DeflateManager_Config::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Ionic_Zip::Ionic::Zlib::DeflateManager::GetIl2CppClass(), "Config");
	return il2cppclass;
}
mscorlib::System::Type* Ionic_Zip::Ionic::Zlib::DeflateManager_Config::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Ionic_Zip::Ionic::Zlib::DeflateManager_Config::_ctor(int32_t goodLength, int32_t maxLazy, int32_t niceLength, int32_t maxChainLength, Ionic_Zip::Ionic::Zlib::DeflateFlavor flavor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "Ionic.Zlib.DeflateFlavor" });
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
Ionic_Zip::Ionic::Zlib::DeflateManager_Config* Ionic_Zip::Ionic::Zlib::DeflateManager_Config::Lookup(Ionic_Zip::Ionic::Zlib::CompressionLevel level)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Lookup", std::vector<std::string> { "Ionic.Zlib.CompressionLevel" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&level;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Ionic_Zip::Ionic::Zlib::DeflateManager_Config*)returnValue;
}
void Ionic_Zip::Ionic::Zlib::DeflateManager_Config::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
