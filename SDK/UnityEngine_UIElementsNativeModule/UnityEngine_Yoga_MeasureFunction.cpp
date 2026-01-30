#include "UnityEngine_Yoga_MeasureFunction.h"

IL2CPP::Il2CppClass* UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::MeasureFunction::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UIElementsNativeModule.dll", "UnityEngine.Yoga", "MeasureFunction");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::MeasureFunction::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::MeasureFunction::_ctor(mscorlib::System::Object* object, intptr_t method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)object;
	params[1] = (intptr_t)&method;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaSize UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::MeasureFunction::Invoke(UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode* node, float width, UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaMeasureMode widthMode, float height, UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaMeasureMode heightMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "UnityEngine.Yoga.YogaNode", "System.Single", "UnityEngine.Yoga.YogaMeasureMode", "System.Single", "UnityEngine.Yoga.YogaMeasureMode" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)&width;
	params[2] = (intptr_t)&widthMode;
	params[3] = (intptr_t)&height;
	params[4] = (intptr_t)&heightMode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
mscorlib::System::IAsyncResult* UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::MeasureFunction::BeginInvoke(UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode* node, float width, UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaMeasureMode widthMode, float height, UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaMeasureMode heightMode, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginInvoke", std::vector<std::string> { "UnityEngine.Yoga.YogaNode", "System.Single", "UnityEngine.Yoga.YogaMeasureMode", "System.Single", "UnityEngine.Yoga.YogaMeasureMode", "System.AsyncCallback", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)&width;
	params[2] = (intptr_t)&widthMode;
	params[3] = (intptr_t)&height;
	params[4] = (intptr_t)&heightMode;
	params[5] = (intptr_t)callback;
	params[6] = (intptr_t)object;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaSize UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::MeasureFunction::EndInvoke(mscorlib::System::IAsyncResult* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndInvoke", std::vector<std::string> { "System.IAsyncResult" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
