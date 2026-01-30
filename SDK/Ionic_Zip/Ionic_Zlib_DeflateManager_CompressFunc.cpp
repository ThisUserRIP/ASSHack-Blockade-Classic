#include "Ionic_Zlib_DeflateManager_CompressFunc.h"

IL2CPP::Il2CppClass* Ionic_Zip::Ionic::Zlib::DeflateManager_CompressFunc::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Ionic_Zip::Ionic::Zlib::DeflateManager::GetIl2CppClass(), "CompressFunc");
	return il2cppclass;
}
mscorlib::System::Type* Ionic_Zip::Ionic::Zlib::DeflateManager_CompressFunc::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Ionic_Zip::Ionic::Zlib::DeflateManager_CompressFunc::_ctor(mscorlib::System::Object* object, intptr_t method)
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
Ionic_Zip::Ionic::Zlib::BlockState Ionic_Zip::Ionic::Zlib::DeflateManager_CompressFunc::Invoke(Ionic_Zip::Ionic::Zlib::FlushType flush)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "Ionic.Zlib.FlushType" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flush;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Ionic_Zip::Ionic::Zlib::BlockState ret;
		std::memset(&ret, 0, sizeof(Ionic_Zip::Ionic::Zlib::BlockState));
		return ret;
	}
	return static_cast<Ionic_Zip::Ionic::Zlib::BlockState>(*(Ionic_Zip::Ionic::Zlib::BlockState*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::IAsyncResult* Ionic_Zip::Ionic::Zlib::DeflateManager_CompressFunc::BeginInvoke(Ionic_Zip::Ionic::Zlib::FlushType flush, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginInvoke", std::vector<std::string> { "Ionic.Zlib.FlushType", "System.AsyncCallback", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&flush;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)object;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
Ionic_Zip::Ionic::Zlib::BlockState Ionic_Zip::Ionic::Zlib::DeflateManager_CompressFunc::EndInvoke(mscorlib::System::IAsyncResult* result)
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
		Ionic_Zip::Ionic::Zlib::BlockState ret;
		std::memset(&ret, 0, sizeof(Ionic_Zip::Ionic::Zlib::BlockState));
		return ret;
	}
	return static_cast<Ionic_Zip::Ionic::Zlib::BlockState>(*(Ionic_Zip::Ionic::Zlib::BlockState*)il2cpp_object_unbox(returnValue));
}
