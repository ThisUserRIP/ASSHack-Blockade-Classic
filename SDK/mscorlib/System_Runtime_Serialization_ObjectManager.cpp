#include "System_Runtime_Serialization_ObjectManager.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::ObjectManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Serialization", "ObjectManager");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::ObjectManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Serialization::ObjectManager::_ctor(mscorlib::System::Runtime::Serialization::ISurrogateSelector* selector, mscorlib::System::Runtime::Serialization::StreamingContext context, bool checkSecurity, bool isCrossAppDomain)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.Serialization.ISurrogateSelector", "System.Runtime.Serialization.StreamingContext", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)selector;
	params[1] = (intptr_t)&context;
	params[2] = (intptr_t)&checkSecurity;
	params[3] = (intptr_t)&isCrossAppDomain;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Runtime::Serialization::ObjectManager::CanCallGetType(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CanCallGetType", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void mscorlib::System::Runtime::Serialization::ObjectManager::set_TopObject(mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_TopObject", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::Runtime::Serialization::ObjectManager::get_TopObject()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TopObject");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Runtime::Serialization::ObjectHolderList* mscorlib::System::Runtime::Serialization::ObjectManager::get_SpecialFixupObjects()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SpecialFixupObjects");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::ObjectHolderList*)returnValue;
}
mscorlib::System::Runtime::Serialization::ObjectHolder* mscorlib::System::Runtime::Serialization::ObjectManager::FindObjectHolder(int64_t objectID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindObjectHolder", std::vector<std::string> { "System.Int64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&objectID;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::ObjectHolder*)returnValue;
}
mscorlib::System::Runtime::Serialization::ObjectHolder* mscorlib::System::Runtime::Serialization::ObjectManager::FindOrCreateObjectHolder(int64_t objectID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindOrCreateObjectHolder", std::vector<std::string> { "System.Int64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&objectID;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::ObjectHolder*)returnValue;
}
void mscorlib::System::Runtime::Serialization::ObjectManager::AddObjectHolder(mscorlib::System::Runtime::Serialization::ObjectHolder* holder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddObjectHolder", std::vector<std::string> { "System.Runtime.Serialization.ObjectHolder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)holder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Runtime::Serialization::ObjectManager::GetCompletionInfo(mscorlib::System::Runtime::Serialization::FixupHolder* fixup, mscorlib::System::Runtime::Serialization::ObjectHolder& holder, mscorlib::System::Object& member, bool bThrowIfMissing)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCompletionInfo", std::vector<std::string> { "System.Runtime.Serialization.FixupHolder", "System.Runtime.Serialization.ObjectHolder&", "System.Object&", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)fixup;
	params[1] = (intptr_t)&holder;
	params[2] = (intptr_t)&member;
	params[3] = (intptr_t)&bThrowIfMissing;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void mscorlib::System::Runtime::Serialization::ObjectManager::FixupSpecialObject(mscorlib::System::Runtime::Serialization::ObjectHolder* holder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FixupSpecialObject", std::vector<std::string> { "System.Runtime.Serialization.ObjectHolder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)holder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Runtime::Serialization::ObjectManager::ResolveObjectReference(mscorlib::System::Runtime::Serialization::ObjectHolder* holder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResolveObjectReference", std::vector<std::string> { "System.Runtime.Serialization.ObjectHolder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)holder;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool mscorlib::System::Runtime::Serialization::ObjectManager::DoValueTypeFixup(mscorlib::System::Reflection::FieldInfo* memberToFix, mscorlib::System::Runtime::Serialization::ObjectHolder* holder, mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoValueTypeFixup", std::vector<std::string> { "System.Reflection.FieldInfo", "System.Runtime.Serialization.ObjectHolder", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)memberToFix;
	params[1] = (intptr_t)holder;
	params[2] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void mscorlib::System::Runtime::Serialization::ObjectManager::CompleteObject(mscorlib::System::Runtime::Serialization::ObjectHolder* holder, bool bObjectFullyComplete)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompleteObject", std::vector<std::string> { "System.Runtime.Serialization.ObjectHolder", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)holder;
	params[1] = (intptr_t)&bObjectFullyComplete;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::ObjectManager::DoNewlyRegisteredObjectFixups(mscorlib::System::Runtime::Serialization::ObjectHolder* holder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoNewlyRegisteredObjectFixups", std::vector<std::string> { "System.Runtime.Serialization.ObjectHolder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)holder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::Runtime::Serialization::ObjectManager::GetObject(int64_t objectID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetObject", std::vector<std::string> { "System.Int64" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&objectID;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void mscorlib::System::Runtime::Serialization::ObjectManager::RegisterString(mscorlib::System::String* obj, int64_t objectID, mscorlib::System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, mscorlib::System::Reflection::MemberInfo* member)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterString", std::vector<std::string> { "System.String", "System.Int64", "System.Runtime.Serialization.SerializationInfo", "System.Int64", "System.Reflection.MemberInfo" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)&objectID;
	params[2] = (intptr_t)info;
	params[3] = (intptr_t)&idOfContainingObj;
	params[4] = (intptr_t)member;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::ObjectManager::RegisterObject(mscorlib::System::Object* obj, int64_t objectID, mscorlib::System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, mscorlib::System::Reflection::MemberInfo* member, IL2CPP::Array<int32_t>* arrayIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterObject", std::vector<std::string> { "System.Object", "System.Int64", "System.Runtime.Serialization.SerializationInfo", "System.Int64", "System.Reflection.MemberInfo", "System.Int32[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)&objectID;
	params[2] = (intptr_t)info;
	params[3] = (intptr_t)&idOfContainingObj;
	params[4] = (intptr_t)member;
	params[5] = (intptr_t)arrayIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::ObjectManager::CompleteISerializableObject(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompleteISerializableObject", std::vector<std::string> { "System.Object", "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)info;
	params[2] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Reflection::RuntimeConstructorInfo* mscorlib::System::Runtime::Serialization::ObjectManager::GetConstructor(mscorlib::System::RuntimeType* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetConstructor", std::vector<std::string> { "System.RuntimeType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::RuntimeConstructorInfo*)returnValue;
}
void mscorlib::System::Runtime::Serialization::ObjectManager::DoFixups()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoFixups");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::ObjectManager::RegisterFixup(mscorlib::System::Runtime::Serialization::FixupHolder* fixup, int64_t objectToBeFixed, int64_t objectRequired)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterFixup", std::vector<std::string> { "System.Runtime.Serialization.FixupHolder", "System.Int64", "System.Int64" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)fixup;
	params[1] = (intptr_t)&objectToBeFixed;
	params[2] = (intptr_t)&objectRequired;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::ObjectManager::RecordFixup(int64_t objectToBeFixed, mscorlib::System::Reflection::MemberInfo* member, int64_t objectRequired)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RecordFixup", std::vector<std::string> { "System.Int64", "System.Reflection.MemberInfo", "System.Int64" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&objectToBeFixed;
	params[1] = (intptr_t)member;
	params[2] = (intptr_t)&objectRequired;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::ObjectManager::RecordDelayedFixup(int64_t objectToBeFixed, mscorlib::System::String* memberName, int64_t objectRequired)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RecordDelayedFixup", std::vector<std::string> { "System.Int64", "System.String", "System.Int64" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&objectToBeFixed;
	params[1] = (intptr_t)memberName;
	params[2] = (intptr_t)&objectRequired;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::ObjectManager::RecordArrayElementFixup(int64_t arrayToBeFixed, IL2CPP::Array<int32_t>* indices, int64_t objectRequired)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RecordArrayElementFixup", std::vector<std::string> { "System.Int64", "System.Int32[]", "System.Int64" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&arrayToBeFixed;
	params[1] = (intptr_t)indices;
	params[2] = (intptr_t)&objectRequired;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::ObjectManager::RaiseDeserializationEvent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaiseDeserializationEvent");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::ObjectManager::AddOnDeserialization(mscorlib::System::Runtime::Serialization::DeserializationEventHandler* handler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddOnDeserialization", std::vector<std::string> { "System.Runtime.Serialization.DeserializationEventHandler" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)handler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::ObjectManager::AddOnDeserialized(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddOnDeserialized", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::ObjectManager::RaiseOnDeserializedEvent(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaiseOnDeserializedEvent", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::ObjectManager::RaiseOnDeserializingEvent(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaiseOnDeserializingEvent", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
