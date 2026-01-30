#include "System_Decimal.h"

IL2CPP::Il2CppClass* mscorlib::System::Decimal::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "Decimal");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Decimal::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Decimal::_ctor(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Decimal::_ctor(uint32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Decimal::_ctor(int64_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Decimal::_ctor(uint64_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Decimal::_ctor(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Decimal::_ctor(double value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Double" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Decimal::_ctor(IL2CPP::Array<int32_t>* bits)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)bits;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Decimal::SetBits(IL2CPP::Array<int32_t>* bits)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetBits", std::vector<std::string> { "System.Int32[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)bits;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Decimal::_ctor(int32_t lo, int32_t mid, int32_t hi, bool isNegative, uint8_t scale)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Boolean", "System.Byte" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&lo;
	params[1] = (intptr_t)&mid;
	params[2] = (intptr_t)&hi;
	params[3] = (intptr_t)&isNegative;
	params[4] = (intptr_t)&scale;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Decimal::OnSerializing(mscorlib::System::Runtime::Serialization::StreamingContext ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnSerializing", std::vector<std::string> { "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ctx;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Decimal::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(mscorlib::System::Object* sender)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sender;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Decimal::_ctor(int32_t lo, int32_t mid, int32_t hi, int32_t flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&lo;
	params[1] = (intptr_t)&mid;
	params[2] = (intptr_t)&hi;
	params[3] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Decimal mscorlib::System::Decimal::Add(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "System.Decimal", "System.Decimal" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&d1;
	params[1] = (intptr_t)&d2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Decimal::FCallAddSub(mscorlib::System::Decimal& d1, mscorlib::System::Decimal& d2, uint8_t bSign)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FCallAddSub", std::vector<std::string> { "System.Decimal&", "System.Decimal&", "System.Byte" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&d1;
	params[1] = (intptr_t)&d2;
	params[2] = (intptr_t)&bSign;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Decimal::FCallCompare(mscorlib::System::Decimal& d1, mscorlib::System::Decimal& d2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FCallCompare", std::vector<std::string> { "System.Decimal&", "System.Decimal&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&d1;
	params[1] = (intptr_t)&d2;
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
int32_t mscorlib::System::Decimal::CompareTo(mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompareTo", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
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
int32_t mscorlib::System::Decimal::CompareTo(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompareTo", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
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
bool mscorlib::System::Decimal::Equals(mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
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
bool mscorlib::System::Decimal::Equals(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
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
int32_t mscorlib::System::Decimal::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
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
mscorlib::System::String* mscorlib::System::Decimal::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Decimal::ToString(mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString", std::vector<std::string> { "System.IFormatProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Decimal::ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString", std::vector<std::string> { "System.String", "System.IFormatProvider" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Decimal mscorlib::System::Decimal::Parse(mscorlib::System::String* s, mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Parse", std::vector<std::string> { "System.String", "System.IFormatProvider" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::Decimal::Parse(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Parse", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.IFormatProvider" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&style;
	params[2] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Decimal::TryParse(mscorlib::System::String* s, mscorlib::System::Decimal& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParse", std::vector<std::string> { "System.String", "System.Decimal&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&result;
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
bool mscorlib::System::Decimal::TryParse(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::IFormatProvider* provider, mscorlib::System::Decimal& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParse", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.IFormatProvider", "System.Decimal&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&style;
	params[2] = (intptr_t)provider;
	params[3] = (intptr_t)&result;
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
IL2CPP::Array<int32_t>* mscorlib::System::Decimal::GetBits(mscorlib::System::Decimal d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBits", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&d;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
mscorlib::System::Decimal mscorlib::System::Decimal::ToDecimal(IL2CPP::Array<uint8_t>* buffer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToDecimal", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)buffer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Decimal::FCallMultiply(mscorlib::System::Decimal& d1, mscorlib::System::Decimal& d2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FCallMultiply", std::vector<std::string> { "System.Decimal&", "System.Decimal&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&d1;
	params[1] = (intptr_t)&d2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Decimal mscorlib::System::Decimal::Negate(mscorlib::System::Decimal d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Negate", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&d;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::Decimal::Round(mscorlib::System::Decimal d, int32_t decimals)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Round", std::vector<std::string> { "System.Decimal", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&d;
	params[1] = (intptr_t)&decimals;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Decimal::FCallRound(mscorlib::System::Decimal& d, int32_t decimals)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FCallRound", std::vector<std::string> { "System.Decimal&", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&d;
	params[1] = (intptr_t)&decimals;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint8_t mscorlib::System::Decimal::ToByte(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToByte", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
int8_t mscorlib::System::Decimal::ToSByte(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToSByte", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int8_t ret;
		std::memset(&ret, 0, sizeof(int8_t));
		return ret;
	}
	return static_cast<int8_t>(*(int8_t*)il2cpp_object_unbox(returnValue));
}
int16_t mscorlib::System::Decimal::ToInt16(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToInt16", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int16_t ret;
		std::memset(&ret, 0, sizeof(int16_t));
		return ret;
	}
	return static_cast<int16_t>(*(int16_t*)il2cpp_object_unbox(returnValue));
}
double mscorlib::System::Decimal::ToDouble(mscorlib::System::Decimal d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToDouble", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&d;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::Decimal::FCallToInt32(mscorlib::System::Decimal d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FCallToInt32", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&d;
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
int32_t mscorlib::System::Decimal::ToInt32(mscorlib::System::Decimal d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToInt32", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&d;
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
int64_t mscorlib::System::Decimal::ToInt64(mscorlib::System::Decimal d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToInt64", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&d;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int64_t ret;
		std::memset(&ret, 0, sizeof(int64_t));
		return ret;
	}
	return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
}
uint16_t mscorlib::System::Decimal::ToUInt16(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToUInt16", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint16_t ret;
		std::memset(&ret, 0, sizeof(uint16_t));
		return ret;
	}
	return static_cast<uint16_t>(*(uint16_t*)il2cpp_object_unbox(returnValue));
}
uint32_t mscorlib::System::Decimal::ToUInt32(mscorlib::System::Decimal d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToUInt32", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&d;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint64_t mscorlib::System::Decimal::ToUInt64(mscorlib::System::Decimal d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToUInt64", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&d;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
float mscorlib::System::Decimal::ToSingle(mscorlib::System::Decimal d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToSingle", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&d;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::Decimal::Truncate(mscorlib::System::Decimal d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Truncate", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&d;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Decimal::FCallTruncate(mscorlib::System::Decimal& d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FCallTruncate", std::vector<std::string> { "System.Decimal&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&d;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Decimal mscorlib::System::Decimal::op_Implicit(uint8_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "System.Byte" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::Decimal::op_Implicit(int8_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "System.SByte" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::Decimal::op_Implicit(int16_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "System.Int16" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::Decimal::op_Implicit(uint16_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "System.UInt16" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::Decimal::op_Implicit(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::Decimal::op_Implicit(uint32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::Decimal::op_Implicit(int64_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "System.Int64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::Decimal::op_Implicit(uint64_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "System.UInt64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::Decimal::op_Explicit(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Explicit", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::Decimal::op_Explicit(double value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Explicit", std::vector<std::string> { "System.Double" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
uint8_t mscorlib::System::Decimal::op_Explicit(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Explicit", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
int8_t mscorlib::System::Decimal::op_Explicit(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Explicit", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int8_t ret;
		std::memset(&ret, 0, sizeof(int8_t));
		return ret;
	}
	return static_cast<int8_t>(*(int8_t*)il2cpp_object_unbox(returnValue));
}
int16_t mscorlib::System::Decimal::op_Explicit(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Explicit", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int16_t ret;
		std::memset(&ret, 0, sizeof(int16_t));
		return ret;
	}
	return static_cast<int16_t>(*(int16_t*)il2cpp_object_unbox(returnValue));
}
uint16_t mscorlib::System::Decimal::op_Explicit(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Explicit", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint16_t ret;
		std::memset(&ret, 0, sizeof(uint16_t));
		return ret;
	}
	return static_cast<uint16_t>(*(uint16_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::Decimal::op_Explicit(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Explicit", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
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
uint32_t mscorlib::System::Decimal::op_Explicit(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Explicit", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
int64_t mscorlib::System::Decimal::op_Explicit(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Explicit", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int64_t ret;
		std::memset(&ret, 0, sizeof(int64_t));
		return ret;
	}
	return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
}
uint64_t mscorlib::System::Decimal::op_Explicit(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Explicit", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
float mscorlib::System::Decimal::op_Explicit(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Explicit", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
double mscorlib::System::Decimal::op_Explicit(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Explicit", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::Decimal::op_Increment(mscorlib::System::Decimal d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Increment", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&d;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::Decimal::op_Addition(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Addition", std::vector<std::string> { "System.Decimal", "System.Decimal" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&d1;
	params[1] = (intptr_t)&d2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::operator+(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
{
	return mscorlib::System::Decimal::op_Addition(d1, d2);
}
mscorlib::System::Decimal mscorlib::System::Decimal::op_Subtraction(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Subtraction", std::vector<std::string> { "System.Decimal", "System.Decimal" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&d1;
	params[1] = (intptr_t)&d2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::operator-(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
{
	return mscorlib::System::Decimal::op_Subtraction(d1, d2);
}
mscorlib::System::Decimal mscorlib::System::Decimal::op_Multiply(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Multiply", std::vector<std::string> { "System.Decimal", "System.Decimal" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&d1;
	params[1] = (intptr_t)&d2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::operator*(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
{
	return mscorlib::System::Decimal::op_Multiply(d1, d2);
}
bool mscorlib::System::Decimal::op_Equality(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Equality", std::vector<std::string> { "System.Decimal", "System.Decimal" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&d1;
	params[1] = (intptr_t)&d2;
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
bool mscorlib::System::operator==(mscorlib::System::Decimal& d1, mscorlib::System::Decimal& d2)
{
	return mscorlib::System::Decimal::op_Equality(d1, d2);
}
bool mscorlib::System::Decimal::op_Inequality(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Inequality", std::vector<std::string> { "System.Decimal", "System.Decimal" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&d1;
	params[1] = (intptr_t)&d2;
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
bool mscorlib::System::operator!=(mscorlib::System::Decimal& d1, mscorlib::System::Decimal& d2)
{
	return mscorlib::System::Decimal::op_Inequality(d1, d2);
}
bool mscorlib::System::Decimal::op_LessThan(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_LessThan", std::vector<std::string> { "System.Decimal", "System.Decimal" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&d1;
	params[1] = (intptr_t)&d2;
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
bool mscorlib::System::operator<(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
{
	return mscorlib::System::Decimal::op_LessThan(d1, d2);
}
bool mscorlib::System::Decimal::op_LessThanOrEqual(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_LessThanOrEqual", std::vector<std::string> { "System.Decimal", "System.Decimal" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&d1;
	params[1] = (intptr_t)&d2;
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
bool mscorlib::System::operator<=(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
{
	return mscorlib::System::Decimal::op_LessThanOrEqual(d1, d2);
}
bool mscorlib::System::Decimal::op_GreaterThan(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_GreaterThan", std::vector<std::string> { "System.Decimal", "System.Decimal" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&d1;
	params[1] = (intptr_t)&d2;
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
bool mscorlib::System::operator>(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
{
	return mscorlib::System::Decimal::op_GreaterThan(d1, d2);
}
bool mscorlib::System::Decimal::op_GreaterThanOrEqual(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_GreaterThanOrEqual", std::vector<std::string> { "System.Decimal", "System.Decimal" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&d1;
	params[1] = (intptr_t)&d2;
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
bool mscorlib::System::operator>=(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2)
{
	return mscorlib::System::Decimal::op_GreaterThanOrEqual(d1, d2);
}
mscorlib::System::TypeCode mscorlib::System::Decimal::GetTypeCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTypeCode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::TypeCode ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::TypeCode));
		return ret;
	}
	return static_cast<mscorlib::System::TypeCode>(*(mscorlib::System::TypeCode*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Decimal::System_IConvertible_ToBoolean(mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IConvertible.ToBoolean", std::vector<std::string> { "System.IFormatProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
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
wchar_t mscorlib::System::Decimal::System_IConvertible_ToChar(mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IConvertible.ToChar", std::vector<std::string> { "System.IFormatProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
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
int8_t mscorlib::System::Decimal::System_IConvertible_ToSByte(mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IConvertible.ToSByte", std::vector<std::string> { "System.IFormatProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int8_t ret;
		std::memset(&ret, 0, sizeof(int8_t));
		return ret;
	}
	return static_cast<int8_t>(*(int8_t*)il2cpp_object_unbox(returnValue));
}
uint8_t mscorlib::System::Decimal::System_IConvertible_ToByte(mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IConvertible.ToByte", std::vector<std::string> { "System.IFormatProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
int16_t mscorlib::System::Decimal::System_IConvertible_ToInt16(mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IConvertible.ToInt16", std::vector<std::string> { "System.IFormatProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int16_t ret;
		std::memset(&ret, 0, sizeof(int16_t));
		return ret;
	}
	return static_cast<int16_t>(*(int16_t*)il2cpp_object_unbox(returnValue));
}
uint16_t mscorlib::System::Decimal::System_IConvertible_ToUInt16(mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IConvertible.ToUInt16", std::vector<std::string> { "System.IFormatProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint16_t ret;
		std::memset(&ret, 0, sizeof(uint16_t));
		return ret;
	}
	return static_cast<uint16_t>(*(uint16_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::Decimal::System_IConvertible_ToInt32(mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IConvertible.ToInt32", std::vector<std::string> { "System.IFormatProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
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
uint32_t mscorlib::System::Decimal::System_IConvertible_ToUInt32(mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IConvertible.ToUInt32", std::vector<std::string> { "System.IFormatProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
int64_t mscorlib::System::Decimal::System_IConvertible_ToInt64(mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IConvertible.ToInt64", std::vector<std::string> { "System.IFormatProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int64_t ret;
		std::memset(&ret, 0, sizeof(int64_t));
		return ret;
	}
	return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
}
uint64_t mscorlib::System::Decimal::System_IConvertible_ToUInt64(mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IConvertible.ToUInt64", std::vector<std::string> { "System.IFormatProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
float mscorlib::System::Decimal::System_IConvertible_ToSingle(mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IConvertible.ToSingle", std::vector<std::string> { "System.IFormatProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
double mscorlib::System::Decimal::System_IConvertible_ToDouble(mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IConvertible.ToDouble", std::vector<std::string> { "System.IFormatProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Decimal mscorlib::System::Decimal::System_IConvertible_ToDecimal(mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IConvertible.ToDecimal", std::vector<std::string> { "System.IFormatProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::DateTime mscorlib::System::Decimal::System_IConvertible_ToDateTime(mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IConvertible.ToDateTime", std::vector<std::string> { "System.IFormatProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::DateTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::DateTime));
		return ret;
	}
	return static_cast<mscorlib::System::DateTime>(*(mscorlib::System::DateTime*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Object* mscorlib::System::Decimal::System_IConvertible_ToType(mscorlib::System::Type* type, mscorlib::System::IFormatProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IConvertible.ToType", std::vector<std::string> { "System.Type", "System.IFormatProvider" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void mscorlib::System::Decimal::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
