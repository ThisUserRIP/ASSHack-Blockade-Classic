#include "System_Xml_Serialization_XmlAttributes.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::XmlAttributes::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Serialization", "XmlAttributes");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::XmlAttributes::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::XmlAttributes::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Serialization::XmlAttributes::_ctor(mscorlib::System::Reflection::ICustomAttributeProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Reflection.ICustomAttributeProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Serialization::XmlAnyAttributeAttribute* System_Xml::System::Xml::Serialization::XmlAttributes::get_XmlAnyAttribute()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_XmlAnyAttribute");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlAnyAttributeAttribute*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlAnyElementAttributes* System_Xml::System::Xml::Serialization::XmlAttributes::get_XmlAnyElements()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_XmlAnyElements");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlAnyElementAttributes*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlArrayAttribute* System_Xml::System::Xml::Serialization::XmlAttributes::get_XmlArray()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_XmlArray");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlArrayAttribute*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlArrayItemAttributes* System_Xml::System::Xml::Serialization::XmlAttributes::get_XmlArrayItems()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_XmlArrayItems");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlArrayItemAttributes*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlAttributeAttribute* System_Xml::System::Xml::Serialization::XmlAttributes::get_XmlAttribute()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_XmlAttribute");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlAttributeAttribute*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlChoiceIdentifierAttribute* System_Xml::System::Xml::Serialization::XmlAttributes::get_XmlChoiceIdentifier()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_XmlChoiceIdentifier");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlChoiceIdentifierAttribute*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::Serialization::XmlAttributes::get_XmlDefaultValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_XmlDefaultValue");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlElementAttributes* System_Xml::System::Xml::Serialization::XmlAttributes::get_XmlElements()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_XmlElements");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlElementAttributes*)returnValue;
}
bool System_Xml::System::Xml::Serialization::XmlAttributes::get_XmlIgnore()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_XmlIgnore");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System_Xml::System::Xml::Serialization::XmlAttributes::get_Xmlns()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Xmlns");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::Serialization::XmlRootAttribute* System_Xml::System::Xml::Serialization::XmlAttributes::get_XmlRoot()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_XmlRoot");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlRootAttribute*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlTextAttribute* System_Xml::System::Xml::Serialization::XmlAttributes::get_XmlText()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_XmlText");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTextAttribute*)returnValue;
}
System_Xml::System::Xml::Serialization::XmlTypeAttribute* System_Xml::System::Xml::Serialization::XmlAttributes::get_XmlType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_XmlType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Serialization::XmlTypeAttribute*)returnValue;
}
mscorlib::System::Nullable_1<mscorlib::System::Int32> System_Xml::System::Xml::Serialization::XmlAttributes::get_Order()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Order");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Nullable_1<mscorlib::System::Int32> ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Nullable_1<mscorlib::System::Int32>));
		return ret;
	}
	return static_cast<mscorlib::System::Nullable_1<mscorlib::System::Int32>>(*(mscorlib::System::Nullable_1<mscorlib::System::Int32>*)il2cpp_object_unbox(returnValue));
}
int32_t System_Xml::System::Xml::Serialization::XmlAttributes::get_SortableOrder()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SortableOrder");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
