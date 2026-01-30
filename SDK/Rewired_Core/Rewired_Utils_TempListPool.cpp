#include "Rewired_Utils_TempListPool.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::TempListPool::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils", "TempListPool");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::TempListPool::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::Utils::Classes::Data::ADictionary_2<mscorlib::System::Type, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Collections::IList>>* Rewired_Core::Rewired::Utils::TempListPool::cbIEGVkUuhPAqjIXglbGqQjtfHTF()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cbIEGVkUuhPAqjIXglbGqQjtfHTF");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::ADictionary_2<mscorlib::System::Type, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Collections::IList>>*)returnValue;
}
void Rewired_Core::Rewired::Utils::TempListPool::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::TempListPool::Clear(mscorlib::System::Type* listType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)listType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
