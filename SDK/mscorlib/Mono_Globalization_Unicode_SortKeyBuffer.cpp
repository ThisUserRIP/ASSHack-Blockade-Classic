#include "Mono_Globalization_Unicode_SortKeyBuffer.h"

IL2CPP::Il2CppClass* mscorlib::Mono::Globalization::Unicode::SortKeyBuffer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "Mono.Globalization.Unicode", "SortKeyBuffer");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Mono::Globalization::Unicode::SortKeyBuffer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::Mono::Globalization::Unicode::SortKeyBuffer::_ctor(int32_t lcid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&lcid;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Globalization::Unicode::SortKeyBuffer::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Globalization::Unicode::SortKeyBuffer::Initialize(mscorlib::System::Globalization::CompareOptions options, int32_t lcid, mscorlib::System::String* s, bool frenchSort)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize", std::vector<std::string> { "System.Globalization.CompareOptions", "System.Int32", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&options;
	params[1] = (intptr_t)&lcid;
	params[2] = (intptr_t)s;
	params[3] = (intptr_t)&frenchSort;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Globalization::Unicode::SortKeyBuffer::AppendCJKExtension(uint8_t lv1msb, uint8_t lv1lsb)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendCJKExtension", std::vector<std::string> { "System.Byte", "System.Byte" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lv1msb;
	params[1] = (intptr_t)&lv1lsb;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Globalization::Unicode::SortKeyBuffer::AppendKana(uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3, bool isSmallKana, uint8_t markType, bool isKatakana, bool isHalfWidth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendKana", std::vector<std::string> { "System.Byte", "System.Byte", "System.Byte", "System.Byte", "System.Boolean", "System.Byte", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&category;
	params[1] = (intptr_t)&lv1;
	params[2] = (intptr_t)&lv2;
	params[3] = (intptr_t)&lv3;
	params[4] = (intptr_t)&isSmallKana;
	params[5] = (intptr_t)&markType;
	params[6] = (intptr_t)&isKatakana;
	params[7] = (intptr_t)&isHalfWidth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Globalization::Unicode::SortKeyBuffer::AppendNormal(uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendNormal", std::vector<std::string> { "System.Byte", "System.Byte", "System.Byte", "System.Byte" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&category;
	params[1] = (intptr_t)&lv1;
	params[2] = (intptr_t)&lv2;
	params[3] = (intptr_t)&lv3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Globalization::Unicode::SortKeyBuffer::AppendLevel5(uint8_t category, uint8_t lv1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendLevel5", std::vector<std::string> { "System.Byte", "System.Byte" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&category;
	params[1] = (intptr_t)&lv1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Globalization::Unicode::SortKeyBuffer::AppendBufferPrimitive(uint8_t value, IL2CPP::Array<uint8_t>& buf, int32_t& bidx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendBufferPrimitive", std::vector<std::string> { "System.Byte", "System.Byte[]&", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)&buf;
	params[2] = (intptr_t)&bidx;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Globalization::SortKey* mscorlib::Mono::Globalization::Unicode::SortKeyBuffer::GetResultAndReset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResultAndReset");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Globalization::SortKey*)returnValue;
}
int32_t mscorlib::Mono::Globalization::Unicode::SortKeyBuffer::GetOptimizedLength(IL2CPP::Array<uint8_t>* data, int32_t len, uint8_t defaultValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOptimizedLength", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&len;
	params[2] = (intptr_t)&defaultValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
mscorlib::System::Globalization::SortKey* mscorlib::Mono::Globalization::Unicode::SortKeyBuffer::GetResult()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResult");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Globalization::SortKey*)returnValue;
}
