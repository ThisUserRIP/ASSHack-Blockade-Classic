#include "UnityEngine_Playables_INotificationReceiver.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Playables::INotificationReceiver::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Playables", "INotificationReceiver");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Playables::INotificationReceiver::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Playables::INotificationReceiver::OnNotify(UnityEngine_CoreModule::UnityEngine::Playables::Playable origin, UnityEngine_CoreModule::UnityEngine::Playables::INotification* notification, mscorlib::System::Object* context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnNotify", std::vector<std::string> { "UnityEngine.Playables.Playable", "UnityEngine.Playables.INotification", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&origin;
	params[1] = (intptr_t)notification;
	params[2] = (intptr_t)context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
