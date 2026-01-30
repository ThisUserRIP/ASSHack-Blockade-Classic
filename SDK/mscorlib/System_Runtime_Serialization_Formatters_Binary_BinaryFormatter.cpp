#include "System_Runtime_Serialization_Formatters_Binary_BinaryFormatter.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::set_AssemblyFormat(mscorlib::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_AssemblyFormat", std::vector<std::string> { "System.Runtime.Serialization.Formatters.FormatterAssemblyStyle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::set_SurrogateSelector(mscorlib::System::Runtime::Serialization::ISurrogateSelector* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_SurrogateSelector", std::vector<std::string> { "System.Runtime.Serialization.ISurrogateSelector" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::_ctor(mscorlib::System::Runtime::Serialization::ISurrogateSelector* selector, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.Serialization.ISurrogateSelector", "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)selector;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Deserialize(mscorlib::System::IO::Stream* serializationStream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Deserialize", std::vector<std::string> { "System.IO.Stream" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)serializationStream;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Deserialize(mscorlib::System::IO::Stream* serializationStream, mscorlib::System::Runtime::Remoting::Messaging::HeaderHandler* handler, bool fCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Deserialize", std::vector<std::string> { "System.IO.Stream", "System.Runtime.Remoting.Messaging.HeaderHandler", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)serializationStream;
	params[1] = (intptr_t)handler;
	params[2] = (intptr_t)&fCheck;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Deserialize(mscorlib::System::IO::Stream* serializationStream, mscorlib::System::Runtime::Remoting::Messaging::HeaderHandler* handler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Deserialize", std::vector<std::string> { "System.IO.Stream", "System.Runtime.Remoting.Messaging.HeaderHandler" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)serializationStream;
	params[1] = (intptr_t)handler;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Serialize(mscorlib::System::IO::Stream* serializationStream, mscorlib::System::Object* graph)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Serialize", std::vector<std::string> { "System.IO.Stream", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)serializationStream;
	params[1] = (intptr_t)graph;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Serialize(mscorlib::System::IO::Stream* serializationStream, mscorlib::System::Object* graph, IL2CPP::Array<mscorlib::System::Runtime::Remoting::Messaging::Header*>* headers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Serialize", std::vector<std::string> { "System.IO.Stream", "System.Object", "System.Runtime.Remoting.Messaging.Header[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)serializationStream;
	params[1] = (intptr_t)graph;
	params[2] = (intptr_t)headers;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::Serialize(mscorlib::System::IO::Stream* serializationStream, mscorlib::System::Object* graph, IL2CPP::Array<mscorlib::System::Runtime::Remoting::Messaging::Header*>* headers, bool fCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Serialize", std::vector<std::string> { "System.IO.Stream", "System.Object", "System.Runtime.Remoting.Messaging.Header[]", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)serializationStream;
	params[1] = (intptr_t)graph;
	params[2] = (intptr_t)headers;
	params[3] = (intptr_t)&fCheck;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::TypeInformation* mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::GetTypeInformation(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTypeInformation", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::TypeInformation*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
