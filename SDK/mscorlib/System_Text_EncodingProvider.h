#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Text { struct EncodingProvider; };
namespace mscorlib::System::Text { struct Encoding; };
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Text { struct EncoderFallback; };
namespace mscorlib::System::Text { struct DecoderFallback; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Text
{
	struct EncodingProvider : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Object* s_InternalSyncObject;
			IL2CPP::Array<mscorlib::System::Text::EncodingProvider*>* s_providers;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::Text::Encoding* GetEncoding(mscorlib::System::String* name);
		mscorlib::System::Text::Encoding* GetEncoding(int32_t codepage);
		mscorlib::System::Text::Encoding* GetEncoding(int32_t codepage, mscorlib::System::Text::EncoderFallback* encoderFallback, mscorlib::System::Text::DecoderFallback* decoderFallback);
		static mscorlib::System::Text::Encoding* GetEncodingFromProvider(int32_t codepage);
		static mscorlib::System::Text::Encoding* GetEncodingFromProvider(mscorlib::System::String* encodingName);
		static mscorlib::System::Text::Encoding* GetEncodingFromProvider(int32_t codepage, mscorlib::System::Text::EncoderFallback* enc, mscorlib::System::Text::DecoderFallback* dec);
		static void _cctor();
	};
}

