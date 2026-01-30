#include "System_Runtime_Remoting_Messaging_CADMessageBase.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Messaging::CADMessageBase::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "CADMessageBase");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Messaging::CADMessageBase::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::Messaging::CADMessageBase::_ctor(mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMethodMessage" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Reflection::MethodBase* mscorlib::System::Runtime::Remoting::Messaging::CADMessageBase::GetMethod()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethod");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodBase*)returnValue;
}
IL2CPP::Array<mscorlib::System::Type*>* mscorlib::System::Runtime::Remoting::Messaging::CADMessageBase::GetSignature(mscorlib::System::Reflection::MethodBase* methodBase, bool load)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSignature", std::vector<std::string> { "System.Reflection.MethodBase", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)methodBase;
	params[1] = (intptr_t)&load;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Type*>*)returnValue;
}
int32_t mscorlib::System::Runtime::Remoting::Messaging::CADMessageBase::MarshalProperties(mscorlib::System::Collections::IDictionary* dict, mscorlib::System::Collections::ArrayList& args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MarshalProperties", std::vector<std::string> { "System.Collections.IDictionary", "System.Collections.ArrayList&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)dict;
	params[1] = (intptr_t)&args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void mscorlib::System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalProperties(mscorlib::System::Collections::IDictionary* dict, int32_t count, mscorlib::System::Collections::ArrayList* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnmarshalProperties", std::vector<std::string> { "System.Collections.IDictionary", "System.Int32", "System.Collections.ArrayList" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dict;
	params[1] = (intptr_t)&count;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Runtime::Remoting::Messaging::CADMessageBase::IsPossibleToIgnoreMarshal(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsPossibleToIgnoreMarshal", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArgument(mscorlib::System::Object* arg, mscorlib::System::Collections::ArrayList& args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MarshalArgument", std::vector<std::string> { "System.Object", "System.Collections.ArrayList&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)arg;
	params[1] = (intptr_t)&args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArgument(mscorlib::System::Object* arg, mscorlib::System::Collections::ArrayList* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnmarshalArgument", std::vector<std::string> { "System.Object", "System.Collections.ArrayList" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)arg;
	params[1] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
IL2CPP::Array<mscorlib::System::Object*>* mscorlib::System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArguments(IL2CPP::Array<mscorlib::System::Object*>* arguments, mscorlib::System::Collections::ArrayList& args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MarshalArguments", std::vector<std::string> { "System.Object[]", "System.Collections.ArrayList&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)arguments;
	params[1] = (intptr_t)&args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Object*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::Object*>* mscorlib::System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArguments(IL2CPP::Array<mscorlib::System::Object*>* arguments, mscorlib::System::Collections::ArrayList* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnmarshalArguments", std::vector<std::string> { "System.Object[]", "System.Collections.ArrayList" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)arguments;
	params[1] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Object*>*)returnValue;
}
void mscorlib::System::Runtime::Remoting::Messaging::CADMessageBase::SaveLogicalCallContext(mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage* msg, mscorlib::System::Collections::ArrayList& serializeList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SaveLogicalCallContext", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMethodMessage", "System.Collections.ArrayList&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)msg;
	params[1] = (intptr_t)&serializeList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* mscorlib::System::Runtime::Remoting::Messaging::CADMessageBase::GetLogicalCallContext(mscorlib::System::Collections::ArrayList* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLogicalCallContext", std::vector<std::string> { "System.Collections.ArrayList" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext*)returnValue;
}
