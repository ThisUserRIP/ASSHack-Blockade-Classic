#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_Player_Editor.h"
namespace Rewired_Core::Rewired::Data { struct Player_Editor; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data
{
	struct Player_Editor_CreateControllerInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _sourceId;
		mscorlib::System::String* _tag;
		int32_t get_sourceId();
		void set_sourceId(int32_t value);
		mscorlib::System::String* get_tag();
		void set_tag(mscorlib::System::String* value);
		void _ctor();
		void _ctor(int32_t sourceId, mscorlib::System::String* tag);
		void _ctor(Rewired_Core::Rewired::Data::Player_Editor_CreateControllerInfo* source);
	};
}

