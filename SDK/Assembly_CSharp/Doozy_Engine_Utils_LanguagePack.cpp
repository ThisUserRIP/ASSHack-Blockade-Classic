#include "Doozy_Engine_Utils_LanguagePack.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::Utils::LanguagePack::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.Utils", "LanguagePack");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::Utils::LanguagePack::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::Doozy::Engine::Language Assembly_CSharp::Doozy::Engine::Utils::LanguagePack::get_CurrentLanguage()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CurrentLanguage");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Doozy::Engine::Language ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Doozy::Engine::Language));
		return ret;
	}
	return static_cast<Assembly_CSharp::Doozy::Engine::Language>(*(Assembly_CSharp::Doozy::Engine::Language*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Doozy::Engine::Utils::LanguagePack::set_CurrentLanguage(Assembly_CSharp::Doozy::Engine::Language value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_CurrentLanguage", std::vector<std::string> { "Doozy.Engine.Language" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Utils::LanguagePack::SaveLanguagePreference(Assembly_CSharp::Doozy::Engine::Language language)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SaveLanguagePreference", std::vector<std::string> { "Doozy.Engine.Language" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&language;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Utils::LanguagePack::SaveLanguagePreference(mscorlib::System::String* prefsKey, Assembly_CSharp::Doozy::Engine::Language language)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SaveLanguagePreference", std::vector<std::string> { "System.String", "Doozy.Engine.Language" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)prefsKey;
	params[1] = (intptr_t)&language;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Utils::LanguagePack::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Utils::LanguagePack::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
