#include "System_Diagnostics_Tracing_ActivityFilter___c__DisplayClass13_0.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::ActivityFilter___c__DisplayClass13_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Diagnostics::Tracing::ActivityFilter::GetIl2CppClass(), "<>c__DisplayClass13_0");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::ActivityFilter___c__DisplayClass13_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Diagnostics::Tracing::ActivityFilter___c__DisplayClass13_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Diagnostics::Tracing::ActivityFilter___c__DisplayClass13_0::_TrimActiveActivityStore_b__0(mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::Guid, mscorlib::System::Int32> x, mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::Guid, mscorlib::System::Int32> y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<TrimActiveActivityStore>b__0", std::vector<std::string> { "System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32>", "System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
