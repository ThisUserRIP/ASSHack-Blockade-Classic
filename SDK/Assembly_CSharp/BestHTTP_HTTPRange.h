#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP
{
	struct HTTPRange : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _FirstBytePos_k__BackingField;
		int32_t _LastBytePos_k__BackingField;
		int32_t _ContentLength_k__BackingField;
		bool _IsValid_k__BackingField;
		int32_t get_FirstBytePos();
		void set_FirstBytePos(int32_t value);
		int32_t get_LastBytePos();
		void set_LastBytePos(int32_t value);
		int32_t get_ContentLength();
		void set_ContentLength(int32_t value);
		bool get_IsValid();
		void set_IsValid(bool value);
		void _ctor();
		void _ctor(int32_t contentLength);
		void _ctor(int32_t firstBytePosition, int32_t lastBytePosition, int32_t contentLength);
		mscorlib::System::String* ToString();
	};
}

