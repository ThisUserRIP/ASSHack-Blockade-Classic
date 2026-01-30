#include "System_Text_StringBuilder.h"

IL2CPP::Il2CppClass* mscorlib::System::Text::StringBuilder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Text", "StringBuilder");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Text::StringBuilder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Text::StringBuilder::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Text::StringBuilder::_ctor(int32_t capacity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&capacity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Text::StringBuilder::_ctor(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Text::StringBuilder::_ctor(mscorlib::System::String* value, int32_t capacity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&capacity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Text::StringBuilder::_ctor(mscorlib::System::String* value, int32_t startIndex, int32_t length, int32_t capacity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&startIndex;
	params[2] = (intptr_t)&length;
	params[3] = (intptr_t)&capacity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Text::StringBuilder::_ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
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
void mscorlib::System::Text::StringBuilder::System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Text::StringBuilder::get_Capacity()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Capacity");
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
void mscorlib::System::Text::StringBuilder::set_Capacity(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Capacity", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Text::StringBuilder::get_MaxCapacity()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MaxCapacity");
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
int32_t mscorlib::System::Text::StringBuilder::EnsureCapacity(int32_t capacity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnsureCapacity", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&capacity;
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
mscorlib::System::String* mscorlib::System::Text::StringBuilder::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Text::StringBuilder::ToString(int32_t startIndex, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&startIndex;
	params[1] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
int32_t mscorlib::System::Text::StringBuilder::get_Length()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Length");
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
void mscorlib::System::Text::StringBuilder::set_Length(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Length", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
wchar_t mscorlib::System::Text::StringBuilder::get_Chars(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Chars", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		wchar_t ret;
		std::memset(&ret, 0, sizeof(wchar_t));
		return ret;
	}
	return static_cast<wchar_t>(*(wchar_t*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Text::StringBuilder::set_Chars(int32_t index, wchar_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Chars", std::vector<std::string> { "System.Int32", "System.Char" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Append(wchar_t value, int32_t repeatCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Append", std::vector<std::string> { "System.Char", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)&repeatCount;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Append(IL2CPP::Array<wchar_t>* value, int32_t startIndex, int32_t charCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Append", std::vector<std::string> { "System.Char[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&startIndex;
	params[2] = (intptr_t)&charCount;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Append(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Append", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
void mscorlib::System::Text::StringBuilder::AppendHelper(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendHelper", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Append(mscorlib::System::String* value, int32_t startIndex, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Append", std::vector<std::string> { "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&startIndex;
	params[2] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::AppendLine()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendLine");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::AppendLine(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendLine", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Insert(int32_t index, mscorlib::System::String* value, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Insert", std::vector<std::string> { "System.Int32", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)value;
	params[2] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Remove(int32_t startIndex, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Remove", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&startIndex;
	params[1] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Append(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Append", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Append(uint8_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Append", std::vector<std::string> { "System.Byte" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Append(wchar_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Append", std::vector<std::string> { "System.Char" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Append(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Append", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Append(int64_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Append", std::vector<std::string> { "System.Int64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Append(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Append", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Append(mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Append", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Append(IL2CPP::Array<wchar_t>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Append", std::vector<std::string> { "System.Char[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Insert(int32_t index, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Insert", std::vector<std::string> { "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Insert(int32_t index, wchar_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Insert", std::vector<std::string> { "System.Int32", "System.Char" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::AppendFormat(mscorlib::System::String* format, mscorlib::System::Object* arg0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendFormat", std::vector<std::string> { "System.String", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)arg0;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::AppendFormat(mscorlib::System::String* format, mscorlib::System::Object* arg0, mscorlib::System::Object* arg1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendFormat", std::vector<std::string> { "System.String", "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)arg0;
	params[2] = (intptr_t)arg1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::AppendFormat(mscorlib::System::String* format, mscorlib::System::Object* arg0, mscorlib::System::Object* arg1, mscorlib::System::Object* arg2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendFormat", std::vector<std::string> { "System.String", "System.Object", "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)arg0;
	params[2] = (intptr_t)arg1;
	params[3] = (intptr_t)arg2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::AppendFormat(mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendFormat", std::vector<std::string> { "System.String", "System.Object[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::AppendFormat(mscorlib::System::IFormatProvider* provider, mscorlib::System::String* format, mscorlib::System::Object* arg0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendFormat", std::vector<std::string> { "System.IFormatProvider", "System.String", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)provider;
	params[1] = (intptr_t)format;
	params[2] = (intptr_t)arg0;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::AppendFormat(mscorlib::System::IFormatProvider* provider, mscorlib::System::String* format, mscorlib::System::Object* arg0, mscorlib::System::Object* arg1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendFormat", std::vector<std::string> { "System.IFormatProvider", "System.String", "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)provider;
	params[1] = (intptr_t)format;
	params[2] = (intptr_t)arg0;
	params[3] = (intptr_t)arg1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::AppendFormat(mscorlib::System::IFormatProvider* provider, mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendFormat", std::vector<std::string> { "System.IFormatProvider", "System.String", "System.Object[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)provider;
	params[1] = (intptr_t)format;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
void mscorlib::System::Text::StringBuilder::FormatError()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatError");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::AppendFormatHelper(mscorlib::System::IFormatProvider* provider, mscorlib::System::String* format, mscorlib::System::ParamsArray args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendFormatHelper", std::vector<std::string> { "System.IFormatProvider", "System.String", "System.ParamsArray" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)provider;
	params[1] = (intptr_t)format;
	params[2] = (intptr_t)&args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Replace(mscorlib::System::String* oldValue, mscorlib::System::String* newValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Replace", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)oldValue;
	params[1] = (intptr_t)newValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Replace(mscorlib::System::String* oldValue, mscorlib::System::String* newValue, int32_t startIndex, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Replace", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)oldValue;
	params[1] = (intptr_t)newValue;
	params[2] = (intptr_t)&startIndex;
	params[3] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Append(wchar_t* value, int32_t valueCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Append", std::vector<std::string> { "System.Char*", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&valueCount;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
void mscorlib::System::Text::StringBuilder::Insert(int32_t index, wchar_t* value, int32_t valueCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Insert", std::vector<std::string> { "System.Int32", "System.Char*", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)value;
	params[2] = (intptr_t)&valueCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Text::StringBuilder::ReplaceAllInChunk(IL2CPP::Array<int32_t>* replacements, int32_t replacementsCount, mscorlib::System::Text::StringBuilder* sourceChunk, int32_t removeCount, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReplaceAllInChunk", std::vector<std::string> { "System.Int32[]", "System.Int32", "System.Text.StringBuilder", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)replacements;
	params[1] = (intptr_t)&replacementsCount;
	params[2] = (intptr_t)sourceChunk;
	params[3] = (intptr_t)&removeCount;
	params[4] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Text::StringBuilder::StartsWith(mscorlib::System::Text::StringBuilder* chunk, int32_t indexInChunk, int32_t count, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartsWith", std::vector<std::string> { "System.Text.StringBuilder", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)chunk;
	params[1] = (intptr_t)&indexInChunk;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)value;
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
void mscorlib::System::Text::StringBuilder::ReplaceInPlaceAtChunk(mscorlib::System::Text::StringBuilder& chunk, int32_t& indexInChunk, wchar_t* value, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReplaceInPlaceAtChunk", std::vector<std::string> { "System.Text.StringBuilder&", "System.Int32&", "System.Char*", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&chunk;
	params[1] = (intptr_t)&indexInChunk;
	params[2] = (intptr_t)value;
	params[3] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Text::StringBuilder::ThreadSafeCopy(wchar_t* sourcePtr, IL2CPP::Array<wchar_t>* destination, int32_t destinationIndex, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThreadSafeCopy", std::vector<std::string> { "System.Char*", "System.Char[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)sourcePtr;
	params[1] = (intptr_t)destination;
	params[2] = (intptr_t)&destinationIndex;
	params[3] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Text::StringBuilder::ThreadSafeCopy(IL2CPP::Array<wchar_t>* source, int32_t sourceIndex, IL2CPP::Array<wchar_t>* destination, int32_t destinationIndex, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThreadSafeCopy", std::vector<std::string> { "System.Char[]", "System.Int32", "System.Char[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)&sourceIndex;
	params[2] = (intptr_t)destination;
	params[3] = (intptr_t)&destinationIndex;
	params[4] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::FindChunkForIndex(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindChunkForIndex", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::Text::StringBuilder::Next(mscorlib::System::Text::StringBuilder* chunk)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Next", std::vector<std::string> { "System.Text.StringBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)chunk;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
void mscorlib::System::Text::StringBuilder::ExpandByABlock(int32_t minBlockCharCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExpandByABlock", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&minBlockCharCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Text::StringBuilder::_ctor(mscorlib::System::Text::StringBuilder* from)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Text.StringBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)from;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Text::StringBuilder::MakeRoom(int32_t index, int32_t count, mscorlib::System::Text::StringBuilder& chunk, int32_t& indexInChunk, bool doneMoveFollowingChars)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MakeRoom", std::vector<std::string> { "System.Int32", "System.Int32", "System.Text.StringBuilder&", "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&count;
	params[2] = (intptr_t)&chunk;
	params[3] = (intptr_t)&indexInChunk;
	params[4] = (intptr_t)&doneMoveFollowingChars;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Text::StringBuilder::_ctor(int32_t size, int32_t maxCapacity, mscorlib::System::Text::StringBuilder* previousBlock)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Text.StringBuilder" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&size;
	params[1] = (intptr_t)&maxCapacity;
	params[2] = (intptr_t)previousBlock;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Text::StringBuilder::Remove(int32_t startIndex, int32_t count, mscorlib::System::Text::StringBuilder& chunk, int32_t& indexInChunk)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Remove", std::vector<std::string> { "System.Int32", "System.Int32", "System.Text.StringBuilder&", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&startIndex;
	params[1] = (intptr_t)&count;
	params[2] = (intptr_t)&chunk;
	params[3] = (intptr_t)&indexInChunk;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
