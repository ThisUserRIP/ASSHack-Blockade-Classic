#include "UnityEngine_UI_Clipping.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::UI::Clipping::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.UI", "Clipping");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::UI::Clipping::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_UI::UnityEngine::UI::Clipping::FindCullAndClipWorldRect(mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::RectMask2D>* rectMaskParents, bool& validRect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindCullAndClipWorldRect", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>", "System.Boolean&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rectMaskParents;
	params[1] = (intptr_t)&validRect;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
