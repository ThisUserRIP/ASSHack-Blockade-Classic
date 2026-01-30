#include "System_Xml_XmlWellFormedWriter_AttributeValueCache_BufferChunk.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlWellFormedWriter_AttributeValueCache_BufferChunk::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::XmlWellFormedWriter_AttributeValueCache::GetIl2CppClass(), "BufferChunk");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlWellFormedWriter_AttributeValueCache_BufferChunk::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::XmlWellFormedWriter_AttributeValueCache_BufferChunk::_ctor(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Char[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
