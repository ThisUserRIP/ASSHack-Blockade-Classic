#include "I2_Loc_LocalizeTarget_UnityUI_Text.h"

IL2CPP::Il2CppClass* Assembly_CSharp::I2::Loc::LocalizeTarget_UnityUI_Text::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "I2.Loc", "LocalizeTarget_UnityUI_Text");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::I2::Loc::LocalizeTarget_UnityUI_Text::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::I2::Loc::LocalizeTarget_UnityUI_Text::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LocalizeTarget_UnityUI_Text::AutoRegister()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AutoRegister");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::I2::Loc::eTermType Assembly_CSharp::I2::Loc::LocalizeTarget_UnityUI_Text::GetPrimaryTermType(Assembly_CSharp::I2::Loc::Localize* cmp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPrimaryTermType", std::vector<std::string> { "I2.Loc.Localize" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cmp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::I2::Loc::eTermType ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::I2::Loc::eTermType));
		return ret;
	}
	return static_cast<Assembly_CSharp::I2::Loc::eTermType>(*(Assembly_CSharp::I2::Loc::eTermType*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::I2::Loc::eTermType Assembly_CSharp::I2::Loc::LocalizeTarget_UnityUI_Text::GetSecondaryTermType(Assembly_CSharp::I2::Loc::Localize* cmp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSecondaryTermType", std::vector<std::string> { "I2.Loc.Localize" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cmp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::I2::Loc::eTermType ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::I2::Loc::eTermType));
		return ret;
	}
	return static_cast<Assembly_CSharp::I2::Loc::eTermType>(*(Assembly_CSharp::I2::Loc::eTermType*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::I2::Loc::LocalizeTarget_UnityUI_Text::CanUseSecondaryTerm()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CanUseSecondaryTerm");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::I2::Loc::LocalizeTarget_UnityUI_Text::AllowMainTermToBeRTL()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AllowMainTermToBeRTL");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::I2::Loc::LocalizeTarget_UnityUI_Text::AllowSecondTermToBeRTL()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AllowSecondTermToBeRTL");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::I2::Loc::LocalizeTarget_UnityUI_Text::GetFinalTerms(Assembly_CSharp::I2::Loc::Localize* cmp, mscorlib::System::String* Main, mscorlib::System::String* Secondary, mscorlib::System::String& primaryTerm, mscorlib::System::String& secondaryTerm)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFinalTerms", std::vector<std::string> { "I2.Loc.Localize", "System.String", "System.String", "System.String&", "System.String&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)cmp;
	params[1] = (intptr_t)Main;
	params[2] = (intptr_t)Secondary;
	params[3] = (intptr_t)&primaryTerm;
	params[4] = (intptr_t)&secondaryTerm;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LocalizeTarget_UnityUI_Text::DoLocalize(Assembly_CSharp::I2::Loc::Localize* cmp, mscorlib::System::String* mainTranslation, mscorlib::System::String* secondaryTranslation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoLocalize", std::vector<std::string> { "I2.Loc.Localize", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cmp;
	params[1] = (intptr_t)mainTranslation;
	params[2] = (intptr_t)secondaryTranslation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LocalizeTarget_UnityUI_Text::InitAlignment(bool isRTL, UnityEngine_TextRenderingModule::UnityEngine::TextAnchor alignment, UnityEngine_TextRenderingModule::UnityEngine::TextAnchor& alignLTR, UnityEngine_TextRenderingModule::UnityEngine::TextAnchor& alignRTL)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitAlignment", std::vector<std::string> { "System.Boolean", "UnityEngine.TextAnchor", "UnityEngine.TextAnchor&", "UnityEngine.TextAnchor&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&isRTL;
	params[1] = (intptr_t)&alignment;
	params[2] = (intptr_t)&alignLTR;
	params[3] = (intptr_t)&alignRTL;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LocalizeTarget_UnityUI_Text::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
