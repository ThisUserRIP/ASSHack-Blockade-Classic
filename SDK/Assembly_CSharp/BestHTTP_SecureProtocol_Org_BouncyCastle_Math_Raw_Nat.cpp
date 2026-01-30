#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Math_Raw_Nat.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.Raw", "Nat");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Add(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)y;
	params[3] = (intptr_t)z;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Add33At(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add33At", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zPos;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Add33At(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t zPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add33At", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zOff;
	params[4] = (intptr_t)&zPos;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Add33To(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add33To", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Add33To(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add33To", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zOff;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::AddBothTo(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddBothTo", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)y;
	params[3] = (intptr_t)z;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::AddBothTo(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddBothTo", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&xOff;
	params[3] = (intptr_t)y;
	params[4] = (intptr_t)&yOff;
	params[5] = (intptr_t)z;
	params[6] = (intptr_t)&zOff;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::AddDWordAt(int32_t len, uint64_t x, IL2CPP::Array<uint32_t>* z, int32_t zPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddDWordAt", std::vector<std::string> { "System.Int32", "System.UInt64", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zPos;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::AddDWordAt(int32_t len, uint64_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t zPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddDWordAt", std::vector<std::string> { "System.Int32", "System.UInt64", "System.UInt32[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zOff;
	params[4] = (intptr_t)&zPos;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::AddDWordTo(int32_t len, uint64_t x, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddDWordTo", std::vector<std::string> { "System.Int32", "System.UInt64", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::AddDWordTo(int32_t len, uint64_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddDWordTo", std::vector<std::string> { "System.Int32", "System.UInt64", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zOff;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::AddTo(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddTo", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)z;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::AddTo(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddTo", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&xOff;
	params[3] = (intptr_t)z;
	params[4] = (intptr_t)&zOff;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::AddWordAt(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddWordAt", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zPos;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::AddWordAt(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t zPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddWordAt", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zOff;
	params[4] = (intptr_t)&zPos;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::AddWordTo(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddWordTo", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::AddWordTo(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddWordTo", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zOff;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::CAdd(int32_t len, int32_t mask, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CAdd", std::vector<std::string> { "System.Int32", "System.Int32", "System.UInt32[]", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&mask;
	params[2] = (intptr_t)x;
	params[3] = (intptr_t)y;
	params[4] = (intptr_t)z;
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
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::CMov(int32_t len, int32_t mask, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CMov", std::vector<std::string> { "System.Int32", "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&mask;
	params[2] = (intptr_t)x;
	params[3] = (intptr_t)&xOff;
	params[4] = (intptr_t)z;
	params[5] = (intptr_t)&zOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::CMov(int32_t len, int32_t mask, IL2CPP::Array<int32_t>* x, int32_t xOff, IL2CPP::Array<int32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CMov", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32[]", "System.Int32", "System.Int32[]", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&mask;
	params[2] = (intptr_t)x;
	params[3] = (intptr_t)&xOff;
	params[4] = (intptr_t)z;
	params[5] = (intptr_t)&zOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Copy(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Copy", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)z;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint32_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Copy(int32_t len, IL2CPP::Array<uint32_t>* x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Copy", std::vector<std::string> { "System.Int32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint32_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Copy(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Copy", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&xOff;
	params[3] = (intptr_t)z;
	params[4] = (intptr_t)&zOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint32_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Create(int32_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint32_t>*)returnValue;
}
IL2CPP::Array<uint64_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Create64(int32_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create64", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint64_t>*)returnValue;
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Dec(int32_t len, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dec", std::vector<std::string> { "System.Int32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)z;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Dec(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dec", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)z;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::DecAt(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t zPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecAt", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)z;
	params[2] = (intptr_t)&zPos;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::DecAt(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t zPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecAt", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)z;
	params[2] = (intptr_t)&zOff;
	params[3] = (intptr_t)&zPos;
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
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Eq(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Eq", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)y;
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
IL2CPP::Array<uint32_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::FromBigInteger(int32_t bits, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromBigInteger", std::vector<std::string> { "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&bits;
	params[1] = (intptr_t)x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint32_t>*)returnValue;
}
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::GetBit(IL2CPP::Array<uint32_t>* x, int32_t bit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBit", std::vector<std::string> { "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)x;
	params[1] = (intptr_t)&bit;
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
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Gte(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Gte", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)y;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Inc(int32_t len, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Inc", std::vector<std::string> { "System.Int32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)z;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Inc(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Inc", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)z;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::IncAt(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t zPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IncAt", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)z;
	params[2] = (intptr_t)&zPos;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::IncAt(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t zPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IncAt", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)z;
	params[2] = (intptr_t)&zOff;
	params[3] = (intptr_t)&zPos;
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
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::IsOne(int32_t len, IL2CPP::Array<uint32_t>* x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsOne", std::vector<std::string> { "System.Int32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
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
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::IsZero(int32_t len, IL2CPP::Array<uint32_t>* x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsZero", std::vector<std::string> { "System.Int32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
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
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Mul(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* zz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Mul", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)y;
	params[3] = (intptr_t)zz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Mul(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* zz, int32_t zzOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Mul", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&xOff;
	params[3] = (intptr_t)y;
	params[4] = (intptr_t)&yOff;
	params[5] = (intptr_t)zz;
	params[6] = (intptr_t)&zzOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Mul(IL2CPP::Array<uint32_t>* x, int32_t xOff, int32_t xLen, IL2CPP::Array<uint32_t>* y, int32_t yOff, int32_t yLen, IL2CPP::Array<uint32_t>* zz, int32_t zzOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Mul", std::vector<std::string> { "System.UInt32[]", "System.Int32", "System.Int32", "System.UInt32[]", "System.Int32", "System.Int32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)x;
	params[1] = (intptr_t)&xOff;
	params[2] = (intptr_t)&xLen;
	params[3] = (intptr_t)y;
	params[4] = (intptr_t)&yOff;
	params[5] = (intptr_t)&yLen;
	params[6] = (intptr_t)zz;
	params[7] = (intptr_t)&zzOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::MulAddTo(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* zz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MulAddTo", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)y;
	params[3] = (intptr_t)zz;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::MulAddTo(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* zz, int32_t zzOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MulAddTo", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&xOff;
	params[3] = (intptr_t)y;
	params[4] = (intptr_t)&yOff;
	params[5] = (intptr_t)zz;
	params[6] = (intptr_t)&zzOff;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Mul31BothAdd(int32_t len, uint32_t a, IL2CPP::Array<uint32_t>* x, uint32_t b, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Mul31BothAdd", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]", "System.UInt32", "System.UInt32[]", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&a;
	params[2] = (intptr_t)x;
	params[3] = (intptr_t)&b;
	params[4] = (intptr_t)y;
	params[5] = (intptr_t)z;
	params[6] = (intptr_t)&zOff;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::MulWord(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MulWord", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)y;
	params[3] = (intptr_t)z;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::MulWord(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MulWord", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)y;
	params[3] = (intptr_t)&yOff;
	params[4] = (intptr_t)z;
	params[5] = (intptr_t)&zOff;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::MulWordAddTo(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MulWordAddTo", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)y;
	params[3] = (intptr_t)&yOff;
	params[4] = (intptr_t)z;
	params[5] = (intptr_t)&zOff;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::MulWordDwordAddAt(int32_t len, uint32_t x, uint64_t y, IL2CPP::Array<uint32_t>* z, int32_t zPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MulWordDwordAddAt", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt64", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)&y;
	params[3] = (intptr_t)z;
	params[4] = (intptr_t)&zPos;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftDownBit(int32_t len, IL2CPP::Array<uint32_t>* z, uint32_t c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftDownBit", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)z;
	params[2] = (intptr_t)&c;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftDownBit(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t zOff, uint32_t c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftDownBit", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)z;
	params[2] = (intptr_t)&zOff;
	params[3] = (intptr_t)&c;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftDownBit(int32_t len, IL2CPP::Array<uint32_t>* x, uint32_t c, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftDownBit", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&c;
	params[3] = (intptr_t)z;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftDownBit(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, uint32_t c, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftDownBit", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&xOff;
	params[3] = (intptr_t)&c;
	params[4] = (intptr_t)z;
	params[5] = (intptr_t)&zOff;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftDownBits(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t bits, uint32_t c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftDownBits", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)z;
	params[2] = (intptr_t)&bits;
	params[3] = (intptr_t)&c;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftDownBits(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t bits, uint32_t c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftDownBits", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.Int32", "System.UInt32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)z;
	params[2] = (intptr_t)&zOff;
	params[3] = (intptr_t)&bits;
	params[4] = (intptr_t)&c;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftDownBits(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t bits, uint32_t c, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftDownBits", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&bits;
	params[3] = (intptr_t)&c;
	params[4] = (intptr_t)z;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftDownBits(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, int32_t bits, uint32_t c, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftDownBits", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&xOff;
	params[3] = (intptr_t)&bits;
	params[4] = (intptr_t)&c;
	params[5] = (intptr_t)z;
	params[6] = (intptr_t)&zOff;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftDownWord(int32_t len, IL2CPP::Array<uint32_t>* z, uint32_t c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftDownWord", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)z;
	params[2] = (intptr_t)&c;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftUpBit(int32_t len, IL2CPP::Array<uint32_t>* z, uint32_t c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftUpBit", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)z;
	params[2] = (intptr_t)&c;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftUpBit(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t zOff, uint32_t c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftUpBit", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)z;
	params[2] = (intptr_t)&zOff;
	params[3] = (intptr_t)&c;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftUpBit(int32_t len, IL2CPP::Array<uint32_t>* x, uint32_t c, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftUpBit", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&c;
	params[3] = (intptr_t)z;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftUpBit(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, uint32_t c, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftUpBit", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&xOff;
	params[3] = (intptr_t)&c;
	params[4] = (intptr_t)z;
	params[5] = (intptr_t)&zOff;
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
uint64_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftUpBit64(int32_t len, IL2CPP::Array<uint64_t>* x, int32_t xOff, uint64_t c, IL2CPP::Array<uint64_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftUpBit64", std::vector<std::string> { "System.Int32", "System.UInt64[]", "System.Int32", "System.UInt64", "System.UInt64[]", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&xOff;
	params[3] = (intptr_t)&c;
	params[4] = (intptr_t)z;
	params[5] = (intptr_t)&zOff;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftUpBits(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t bits, uint32_t c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftUpBits", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)z;
	params[2] = (intptr_t)&bits;
	params[3] = (intptr_t)&c;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftUpBits(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t bits, uint32_t c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftUpBits", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.Int32", "System.UInt32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)z;
	params[2] = (intptr_t)&zOff;
	params[3] = (intptr_t)&bits;
	params[4] = (intptr_t)&c;
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
uint64_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftUpBits64(int32_t len, IL2CPP::Array<uint64_t>* z, int32_t zOff, int32_t bits, uint64_t c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftUpBits64", std::vector<std::string> { "System.Int32", "System.UInt64[]", "System.Int32", "System.Int32", "System.UInt64" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)z;
	params[2] = (intptr_t)&zOff;
	params[3] = (intptr_t)&bits;
	params[4] = (intptr_t)&c;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftUpBits(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t bits, uint32_t c, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftUpBits", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&bits;
	params[3] = (intptr_t)&c;
	params[4] = (intptr_t)z;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftUpBits(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, int32_t bits, uint32_t c, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftUpBits", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&xOff;
	params[3] = (intptr_t)&bits;
	params[4] = (intptr_t)&c;
	params[5] = (intptr_t)z;
	params[6] = (intptr_t)&zOff;
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
uint64_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ShiftUpBits64(int32_t len, IL2CPP::Array<uint64_t>* x, int32_t xOff, int32_t bits, uint64_t c, IL2CPP::Array<uint64_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShiftUpBits64", std::vector<std::string> { "System.Int32", "System.UInt64[]", "System.Int32", "System.Int32", "System.UInt64", "System.UInt64[]", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&xOff;
	params[3] = (intptr_t)&bits;
	params[4] = (intptr_t)&c;
	params[5] = (intptr_t)z;
	params[6] = (intptr_t)&zOff;
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
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Square(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* zz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Square", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)zz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Square(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* zz, int32_t zzOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Square", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&xOff;
	params[3] = (intptr_t)zz;
	params[4] = (intptr_t)&zzOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::SquareWordAdd(IL2CPP::Array<uint32_t>* x, int32_t xPos, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SquareWordAdd", std::vector<std::string> { "System.UInt32[]", "System.Int32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)x;
	params[1] = (intptr_t)&xPos;
	params[2] = (intptr_t)z;
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
uint32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::SquareWordAdd(IL2CPP::Array<uint32_t>* x, int32_t xOff, int32_t xPos, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SquareWordAdd", std::vector<std::string> { "System.UInt32[]", "System.Int32", "System.Int32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)x;
	params[1] = (intptr_t)&xOff;
	params[2] = (intptr_t)&xPos;
	params[3] = (intptr_t)z;
	params[4] = (intptr_t)&zOff;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Sub(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Sub", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)y;
	params[3] = (intptr_t)z;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Sub(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Sub", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&xOff;
	params[3] = (intptr_t)y;
	params[4] = (intptr_t)&yOff;
	params[5] = (intptr_t)z;
	params[6] = (intptr_t)&zOff;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Sub33At(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Sub33At", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zPos;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Sub33At(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t zPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Sub33At", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zOff;
	params[4] = (intptr_t)&zPos;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Sub33From(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Sub33From", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Sub33From(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Sub33From", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zOff;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::SubBothFrom(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SubBothFrom", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)y;
	params[3] = (intptr_t)z;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::SubBothFrom(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SubBothFrom", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&xOff;
	params[3] = (intptr_t)y;
	params[4] = (intptr_t)&yOff;
	params[5] = (intptr_t)z;
	params[6] = (intptr_t)&zOff;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::SubDWordAt(int32_t len, uint64_t x, IL2CPP::Array<uint32_t>* z, int32_t zPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SubDWordAt", std::vector<std::string> { "System.Int32", "System.UInt64", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zPos;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::SubDWordAt(int32_t len, uint64_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t zPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SubDWordAt", std::vector<std::string> { "System.Int32", "System.UInt64", "System.UInt32[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zOff;
	params[4] = (intptr_t)&zPos;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::SubDWordFrom(int32_t len, uint64_t x, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SubDWordFrom", std::vector<std::string> { "System.Int32", "System.UInt64", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::SubDWordFrom(int32_t len, uint64_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SubDWordFrom", std::vector<std::string> { "System.Int32", "System.UInt64", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zOff;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::SubFrom(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SubFrom", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)z;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::SubFrom(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SubFrom", std::vector<std::string> { "System.Int32", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&xOff;
	params[3] = (intptr_t)z;
	params[4] = (intptr_t)&zOff;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::SubWordAt(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SubWordAt", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zPos;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::SubWordAt(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t zPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SubWordAt", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zOff;
	params[4] = (intptr_t)&zPos;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::SubWordFrom(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SubWordFrom", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::SubWordFrom(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SubWordFrom", std::vector<std::string> { "System.Int32", "System.UInt32", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)z;
	params[3] = (intptr_t)&zOff;
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
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::ToBigInteger(int32_t len, IL2CPP::Array<uint32_t>* x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToBigInteger", std::vector<std::string> { "System.Int32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::Zero(int32_t len, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Zero", std::vector<std::string> { "System.Int32", "System.UInt32[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&len;
	params[1] = (intptr_t)z;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Nat::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
