#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Text::RegularExpressions { struct Regex; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct BinaryWriter; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System { struct Object; };
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace Assembly_CSharp::BestHTTP::Extensions { struct HeaderValue; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::BestHTTP::Extensions { struct BufferPoolMemoryStream; };

namespace Assembly_CSharp::BestHTTP::Extensions
{
	struct Extensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System::System::Text::RegularExpressions::Regex* validIpV4AddressRegex;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* AsciiToString(IL2CPP::Array<uint8_t>* bytes);
		static IL2CPP::Array<uint8_t>* GetASCIIBytes(mscorlib::System::String* str);
		static void SendAsASCII(mscorlib::System::IO::BinaryWriter* stream, mscorlib::System::String* str);
		static void WriteLine(mscorlib::System::IO::Stream* fs);
		static void WriteLine(mscorlib::System::IO::Stream* fs, mscorlib::System::String* line);
		static void WriteLine(mscorlib::System::IO::Stream* fs, mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* values);
		static mscorlib::System::String* GetRequestPathAndQueryURL(System::System::Uri* uri);
		static IL2CPP::Array<mscorlib::System::String*>* FindOption(mscorlib::System::String* str, mscorlib::System::String* option);
		static void WriteArray(mscorlib::System::IO::Stream* stream, IL2CPP::Array<uint8_t>* array);
		static bool IsHostIsAnIPAddress(System::System::Uri* uri);
		static bool IsIpV4AddressValid(mscorlib::System::String* address);
		static bool IsIpV6AddressValid(mscorlib::System::String* address);
		static int32_t ToInt32(mscorlib::System::String* str, int32_t defaultValue);
		static int64_t ToInt64(mscorlib::System::String* str, int64_t defaultValue);
		static mscorlib::System::DateTime ToDateTime(mscorlib::System::String* str, mscorlib::System::DateTime defaultValue);
		static mscorlib::System::String* ToStrOrEmpty(mscorlib::System::String* str);
		static mscorlib::System::String* ToBinaryStr(uint8_t value);
		static mscorlib::System::String* CalculateMD5Hash(mscorlib::System::String* input);
		static mscorlib::System::String* CalculateMD5Hash(IL2CPP::Array<uint8_t>* input);
		static mscorlib::System::String* Read(mscorlib::System::String* str, int32_t& pos, wchar_t block, bool needResult);
		static mscorlib::System::String* Read(mscorlib::System::String* str, int32_t& pos, mscorlib::System::Func_2<mscorlib::System::Char, mscorlib::System::Boolean>* block, bool needResult);
		static mscorlib::System::String* ReadPossibleQuotedText(mscorlib::System::String* str, int32_t& pos);
		static void SkipWhiteSpace(mscorlib::System::String* str, int32_t& pos);
		static mscorlib::System::String* TrimAndLower(mscorlib::System::String* str);
		static mscorlib::System::Nullable_1<mscorlib::System::Char> Peek(mscorlib::System::String* str, int32_t pos);
		static mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Extensions::HeaderValue>* ParseOptionalHeader(mscorlib::System::String* str);
		static mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Extensions::HeaderValue>* ParseQualityParams(mscorlib::System::String* str);
		static void ReadBuffer(mscorlib::System::IO::Stream* stream, IL2CPP::Array<uint8_t>* buffer);
		static void ReadBuffer(mscorlib::System::IO::Stream* stream, IL2CPP::Array<uint8_t>* buffer, int32_t length);
		static void WriteString(Assembly_CSharp::BestHTTP::Extensions::BufferPoolMemoryStream* ms, mscorlib::System::String* str);
		static void WriteLine(Assembly_CSharp::BestHTTP::Extensions::BufferPoolMemoryStream* ms);
		static void WriteLine(Assembly_CSharp::BestHTTP::Extensions::BufferPoolMemoryStream* ms, mscorlib::System::String* str);
		static void _cctor();
	};
}

