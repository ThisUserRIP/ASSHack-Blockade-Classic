#include "System_Xml_BinHexEncoder.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::BinHexEncoder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml", "BinHexEncoder");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::BinHexEncoder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::BinHexEncoder::Encode(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count, System_Xml::System::Xml::XmlWriter* writer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Encode", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Xml.XmlWriter" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)writer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* System_Xml::System::Xml::BinHexEncoder::Encode(IL2CPP::Array<uint8_t>* inArray, int32_t offsetIn, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Encode", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)inArray;
	params[1] = (intptr_t)&offsetIn;
	params[2] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t System_Xml::System::Xml::BinHexEncoder::Encode(IL2CPP::Array<uint8_t>* inArray, int32_t offsetIn, int32_t count, IL2CPP::Array<wchar_t>* outArray)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Encode", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Char[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)inArray;
	params[1] = (intptr_t)&offsetIn;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)outArray;
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
