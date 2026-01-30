#include "System_Runtime_Serialization_ISurrogateSelector.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::ISurrogateSelector::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Serialization", "ISurrogateSelector");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::ISurrogateSelector::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Runtime::Serialization::ISerializationSurrogate* mscorlib::System::Runtime::Serialization::ISurrogateSelector::GetSurrogate(mscorlib::System::Type* type, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ISurrogateSelector& selector)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSurrogate", std::vector<std::string> { "System.Type", "System.Runtime.Serialization.StreamingContext", "System.Runtime.Serialization.ISurrogateSelector&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)&context;
	params[2] = (intptr_t)&selector;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::ISerializationSurrogate*)returnValue;
}
