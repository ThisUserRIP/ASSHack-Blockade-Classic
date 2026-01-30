#include "UnityEngine_Yoga_YogaNode.h"

IL2CPP::Il2CppClass* UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UIElementsNativeModule.dll", "UnityEngine.Yoga", "YogaNode");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaSize UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode::MeasureInternal(UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode* node, float width, UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaMeasureMode widthMode, float height, UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaMeasureMode heightMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MeasureInternal", std::vector<std::string> { "UnityEngine.Yoga.YogaNode", "System.Single", "UnityEngine.Yoga.YogaMeasureMode", "System.Single", "UnityEngine.Yoga.YogaMeasureMode" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)&width;
	params[2] = (intptr_t)&widthMode;
	params[3] = (intptr_t)&height;
	params[4] = (intptr_t)&heightMode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaSize ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaSize));
		return ret;
	}
	return static_cast<UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaSize>(*(UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaSize*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode::BaselineInternal(UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode* node, float width, float height)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BaselineInternal", std::vector<std::string> { "UnityEngine.Yoga.YogaNode", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)&width;
	params[2] = (intptr_t)&height;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
