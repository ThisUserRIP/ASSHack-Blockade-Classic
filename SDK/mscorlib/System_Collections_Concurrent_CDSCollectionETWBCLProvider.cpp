#include "System_Collections_Concurrent_CDSCollectionETWBCLProvider.h"

IL2CPP::Il2CppClass* mscorlib::System::Collections::Concurrent::CDSCollectionETWBCLProvider::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Collections.Concurrent", "CDSCollectionETWBCLProvider");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Collections::Concurrent::CDSCollectionETWBCLProvider::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Collections::Concurrent::CDSCollectionETWBCLProvider::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentDictionary_AcquiringAllLocks(int32_t numOfBuckets)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConcurrentDictionary_AcquiringAllLocks", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&numOfBuckets;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Collections::Concurrent::CDSCollectionETWBCLProvider::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
