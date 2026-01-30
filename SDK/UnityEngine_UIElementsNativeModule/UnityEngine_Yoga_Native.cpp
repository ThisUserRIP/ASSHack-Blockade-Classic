#include "UnityEngine_Yoga_Native.h"

IL2CPP::Il2CppClass* UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::Native::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UIElementsNativeModule.dll", "UnityEngine.Yoga", "Native");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::Native::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::Native::YGNodeMeasureInvoke(UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode* node, float width, UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaMeasureMode widthMode, float height, UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaMeasureMode heightMode, intptr_t returnValueAddress)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YGNodeMeasureInvoke", std::vector<std::string> { "UnityEngine.Yoga.YogaNode", "System.Single", "UnityEngine.Yoga.YogaMeasureMode", "System.Single", "UnityEngine.Yoga.YogaMeasureMode", "System.IntPtr" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)&width;
	params[2] = (intptr_t)&widthMode;
	params[3] = (intptr_t)&height;
	params[4] = (intptr_t)&heightMode;
	params[5] = (intptr_t)&returnValueAddress;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::Native::YGNodeBaselineInvoke(UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode* node, float width, float height, intptr_t returnValueAddress)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YGNodeBaselineInvoke", std::vector<std::string> { "UnityEngine.Yoga.YogaNode", "System.Single", "System.Single", "System.IntPtr" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)&width;
	params[2] = (intptr_t)&height;
	params[3] = (intptr_t)&returnValueAddress;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
