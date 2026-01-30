#include "Doozy_Engine_Themes_ThemeVariantData___c__DisplayClass33_0.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData___c__DisplayClass33_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData::GetIl2CppClass(), "<>c__DisplayClass33_0");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData___c__DisplayClass33_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData___c__DisplayClass33_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData___c__DisplayClass33_0::_ContainsSprite_b__0(Assembly_CSharp::Doozy::Engine::Themes::SpriteId p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<ContainsSprite>b__0", std::vector<std::string> { "Doozy.Engine.Themes.SpriteId" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&p;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
