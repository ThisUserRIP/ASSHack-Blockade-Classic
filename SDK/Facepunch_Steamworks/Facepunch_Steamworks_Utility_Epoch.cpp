#include "Facepunch_Steamworks_Utility_Epoch.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::Facepunch::Steamworks::Utility_Epoch::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Facepunch_Steamworks::Facepunch::Steamworks::Utility::GetIl2CppClass(), "Epoch");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::Facepunch::Steamworks::Utility_Epoch::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::DateTime Facepunch_Steamworks::Facepunch::Steamworks::Utility_Epoch::ToDateTime(mscorlib::System::Decimal unixTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToDateTime", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&unixTime;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::DateTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::DateTime));
		return ret;
	}
	return static_cast<mscorlib::System::DateTime>(*(mscorlib::System::DateTime*)il2cpp_object_unbox(returnValue));
}
void Facepunch_Steamworks::Facepunch::Steamworks::Utility_Epoch::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
