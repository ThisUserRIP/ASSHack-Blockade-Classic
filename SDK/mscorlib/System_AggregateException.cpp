#include "System_AggregateException.h"

IL2CPP::Il2CppClass* mscorlib::System::AggregateException::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "AggregateException");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::AggregateException::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::AggregateException::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::AggregateException::_ctor(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Exception>* innerExceptions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Collections.Generic.IEnumerable`1<System.Exception>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)innerExceptions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::AggregateException::_ctor(IL2CPP::Array<mscorlib::System::Exception*>* innerExceptions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Exception[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)innerExceptions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::AggregateException::_ctor(mscorlib::System::String* message, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Exception>* innerExceptions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Collections.Generic.IEnumerable`1<System.Exception>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)innerExceptions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::AggregateException::_ctor(mscorlib::System::String* message, IL2CPP::Array<mscorlib::System::Exception*>* innerExceptions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Exception[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)innerExceptions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::AggregateException::_ctor(mscorlib::System::String* message, mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Exception>* innerExceptions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Collections.Generic.IList`1<System.Exception>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)innerExceptions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::AggregateException::_ctor(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo>* innerExceptionInfos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Collections.Generic.IEnumerable`1<System.Runtime.ExceptionServices.ExceptionDispatchInfo>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)innerExceptionInfos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::AggregateException::_ctor(mscorlib::System::String* message, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo>* innerExceptionInfos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Collections.Generic.IEnumerable`1<System.Runtime.ExceptionServices.ExceptionDispatchInfo>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)innerExceptionInfos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::AggregateException::_ctor(mscorlib::System::String* message, mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo>* innerExceptionInfos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Collections.Generic.IList`1<System.Runtime.ExceptionServices.ExceptionDispatchInfo>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)innerExceptionInfos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::AggregateException::_ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::AggregateException::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetObjectData", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<mscorlib::System::Exception>* mscorlib::System::AggregateException::get_InnerExceptions()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_InnerExceptions");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<mscorlib::System::Exception>*)returnValue;
}
mscorlib::System::AggregateException* mscorlib::System::AggregateException::Flatten()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Flatten");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::AggregateException*)returnValue;
}
mscorlib::System::String* mscorlib::System::AggregateException::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
