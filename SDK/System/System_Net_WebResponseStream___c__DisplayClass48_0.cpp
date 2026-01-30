#include "System_Net_WebResponseStream___c__DisplayClass48_0.h"

IL2CPP::Il2CppClass* System::System::Net::WebResponseStream___c__DisplayClass48_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::Net::WebResponseStream::GetIl2CppClass(), "<>c__DisplayClass48_0");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::WebResponseStream___c__DisplayClass48_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Net::WebResponseStream___c__DisplayClass48_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Int32>>* System::System::Net::WebResponseStream___c__DisplayClass48_0::_ReadAsync_b__0(mscorlib::System::Threading::CancellationToken ct)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<ReadAsync>b__0", std::vector<std::string> { "System.Threading.CancellationToken" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ct;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Int32>>*)returnValue;
}
void System::System::Net::WebResponseStream___c__DisplayClass48_0::_ReadAsync_b__1()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<ReadAsync>b__1");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
