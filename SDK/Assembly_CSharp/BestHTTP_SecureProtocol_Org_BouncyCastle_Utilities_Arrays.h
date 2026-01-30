#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities
{
	struct Arrays : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* EmptyBytes;
			IL2CPP::Array<int32_t>* EmptyInts;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool AreAllZeroes(IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len);
		static bool AreEqual(IL2CPP::Array<bool>* a, IL2CPP::Array<bool>* b);
		static bool AreEqual(IL2CPP::Array<wchar_t>* a, IL2CPP::Array<wchar_t>* b);
		static bool AreEqual(IL2CPP::Array<uint8_t>* a, IL2CPP::Array<uint8_t>* b);
		static bool AreSame(IL2CPP::Array<uint8_t>* a, IL2CPP::Array<uint8_t>* b);
		static bool ConstantTimeAreEqual(IL2CPP::Array<uint8_t>* a, IL2CPP::Array<uint8_t>* b);
		static bool AreEqual(IL2CPP::Array<int32_t>* a, IL2CPP::Array<int32_t>* b);
		static bool AreEqual(IL2CPP::Array<uint32_t>* a, IL2CPP::Array<uint32_t>* b);
		static bool HaveSameContents(IL2CPP::Array<bool>* a, IL2CPP::Array<bool>* b);
		static bool HaveSameContents(IL2CPP::Array<wchar_t>* a, IL2CPP::Array<wchar_t>* b);
		static bool HaveSameContents(IL2CPP::Array<uint8_t>* a, IL2CPP::Array<uint8_t>* b);
		static bool HaveSameContents(IL2CPP::Array<int32_t>* a, IL2CPP::Array<int32_t>* b);
		static bool HaveSameContents(IL2CPP::Array<uint32_t>* a, IL2CPP::Array<uint32_t>* b);
		static mscorlib::System::String* ToString(IL2CPP::Array<mscorlib::System::Object*>* a);
		static int32_t GetHashCode(IL2CPP::Array<uint8_t>* data);
		static int32_t GetHashCode(IL2CPP::Array<uint8_t>* data, int32_t off, int32_t len);
		static int32_t GetHashCode(IL2CPP::Array<int32_t>* data);
		static int32_t GetHashCode(IL2CPP::Array<int32_t>* data, int32_t off, int32_t len);
		static int32_t GetHashCode(IL2CPP::Array<uint32_t>* data);
		static int32_t GetHashCode(IL2CPP::Array<uint32_t>* data, int32_t off, int32_t len);
		static int32_t GetHashCode(IL2CPP::Array<uint64_t>* data);
		static int32_t GetHashCode(IL2CPP::Array<uint64_t>* data, int32_t off, int32_t len);
		static IL2CPP::Array<uint8_t>* Clone(IL2CPP::Array<uint8_t>* data);
		static IL2CPP::Array<uint8_t>* Clone(IL2CPP::Array<uint8_t>* data, IL2CPP::Array<uint8_t>* existing);
		static IL2CPP::Array<int32_t>* Clone(IL2CPP::Array<int32_t>* data);
		static IL2CPP::Array<uint32_t>* Clone(IL2CPP::Array<uint32_t>* data);
		static IL2CPP::Array<int64_t>* Clone(IL2CPP::Array<int64_t>* data);
		static IL2CPP::Array<uint64_t>* Clone(IL2CPP::Array<uint64_t>* data);
		static IL2CPP::Array<uint64_t>* Clone(IL2CPP::Array<uint64_t>* data, IL2CPP::Array<uint64_t>* existing);
		static bool Contains(IL2CPP::Array<uint8_t>* a, uint8_t n);
		static bool Contains(IL2CPP::Array<int16_t>* a, int16_t n);
		static bool Contains(IL2CPP::Array<int32_t>* a, int32_t n);
		static void Fill(IL2CPP::Array<uint8_t>* buf, uint8_t b);
		static void Fill(IL2CPP::Array<uint8_t>* buf, int32_t from, int32_t to, uint8_t b);
		static IL2CPP::Array<uint8_t>* CopyOf(IL2CPP::Array<uint8_t>* data, int32_t newLength);
		static IL2CPP::Array<wchar_t>* CopyOf(IL2CPP::Array<wchar_t>* data, int32_t newLength);
		static IL2CPP::Array<int32_t>* CopyOf(IL2CPP::Array<int32_t>* data, int32_t newLength);
		static IL2CPP::Array<int64_t>* CopyOf(IL2CPP::Array<int64_t>* data, int32_t newLength);
		static IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*>* CopyOf(IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*>* data, int32_t newLength);
		static IL2CPP::Array<uint8_t>* CopyOfRange(IL2CPP::Array<uint8_t>* data, int32_t from, int32_t to);
		static IL2CPP::Array<int32_t>* CopyOfRange(IL2CPP::Array<int32_t>* data, int32_t from, int32_t to);
		static IL2CPP::Array<int64_t>* CopyOfRange(IL2CPP::Array<int64_t>* data, int32_t from, int32_t to);
		static IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*>* CopyOfRange(IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*>* data, int32_t from, int32_t to);
		static int32_t GetLength(int32_t from, int32_t to);
		static IL2CPP::Array<uint8_t>* Append(IL2CPP::Array<uint8_t>* a, uint8_t b);
		static IL2CPP::Array<int16_t>* Append(IL2CPP::Array<int16_t>* a, int16_t b);
		static IL2CPP::Array<int32_t>* Append(IL2CPP::Array<int32_t>* a, int32_t b);
		static IL2CPP::Array<uint8_t>* Concatenate(IL2CPP::Array<uint8_t>* a, IL2CPP::Array<uint8_t>* b);
		static IL2CPP::Array<uint8_t>* ConcatenateAll(IL2CPP::Array<IL2CPP::Array<uint8_t>*>* vs);
		static IL2CPP::Array<int32_t>* Concatenate(IL2CPP::Array<int32_t>* a, IL2CPP::Array<int32_t>* b);
		static IL2CPP::Array<uint8_t>* Prepend(IL2CPP::Array<uint8_t>* a, uint8_t b);
		static IL2CPP::Array<int16_t>* Prepend(IL2CPP::Array<int16_t>* a, int16_t b);
		static IL2CPP::Array<int32_t>* Prepend(IL2CPP::Array<int32_t>* a, int32_t b);
		static IL2CPP::Array<uint8_t>* Reverse(IL2CPP::Array<uint8_t>* a);
		static IL2CPP::Array<int32_t>* Reverse(IL2CPP::Array<int32_t>* a);
		void _ctor();
		static void _cctor();
	};
}

