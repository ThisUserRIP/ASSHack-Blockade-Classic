#include "System_LocalDataStore.h"

IL2CPP::Il2CppClass* mscorlib::System::LocalDataStore::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "LocalDataStore");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::LocalDataStore::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::LocalDataStore::_ctor(mscorlib::System::LocalDataStoreMgr* mgr, int32_t InitialCapacity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.LocalDataStoreMgr", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)mgr;
	params[1] = (intptr_t)&InitialCapacity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::LocalDataStore::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::LocalDataStore::GetData(mscorlib::System::LocalDataStoreSlot* slot)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetData", std::vector<std::string> { "System.LocalDataStoreSlot" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)slot;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void mscorlib::System::LocalDataStore::SetData(mscorlib::System::LocalDataStoreSlot* slot, mscorlib::System::Object* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetData", std::vector<std::string> { "System.LocalDataStoreSlot", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)slot;
	params[1] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::LocalDataStore::FreeData(int32_t slot, int64_t cookie)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FreeData", std::vector<std::string> { "System.Int32", "System.Int64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&slot;
	params[1] = (intptr_t)&cookie;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::LocalDataStoreElement* mscorlib::System::LocalDataStore::PopulateElement(mscorlib::System::LocalDataStoreSlot* slot)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PopulateElement", std::vector<std::string> { "System.LocalDataStoreSlot" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)slot;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::LocalDataStoreElement*)returnValue;
}
