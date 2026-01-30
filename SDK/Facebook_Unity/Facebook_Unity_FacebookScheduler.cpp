#include "Facebook_Unity_FacebookScheduler.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::FacebookScheduler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity", "FacebookScheduler");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::FacebookScheduler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facebook_Unity::Facebook::Unity::FacebookScheduler::Schedule(mscorlib::System::Action* action, int64_t delay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Schedule", std::vector<std::string> { "System.Action", "System.Int64" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)action;
	params[1] = (intptr_t)&delay;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Facebook_Unity::Facebook::Unity::FacebookScheduler::DelayEvent(mscorlib::System::Action* action, int64_t delay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DelayEvent", std::vector<std::string> { "System.Action", "System.Int64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)action;
	params[1] = (intptr_t)&delay;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
void Facebook_Unity::Facebook::Unity::FacebookScheduler::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
