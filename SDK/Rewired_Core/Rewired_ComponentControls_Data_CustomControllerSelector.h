#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct CustomController; };

namespace Rewired_Core::Rewired::ComponentControls::Data
{
	struct CustomControllerSelector : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _findUsingSourceId;
		int32_t _sourceId;
		bool _findUsingTag;
		mscorlib::System::String* _tag;
		bool _findInPlayer;
		int32_t _playerId;
		bool get_findUsingSourceId();
		void set_findUsingSourceId(bool value);
		int32_t get_sourceId();
		void set_sourceId(int32_t value);
		bool get_findUsingTag();
		void set_findUsingTag(bool value);
		mscorlib::System::String* get_tag();
		void set_tag(mscorlib::System::String* value);
		bool get_findInPlayer();
		void set_findInPlayer(bool value);
		int32_t get_playerId();
		void set_playerId(int32_t value);
		Rewired_Core::Rewired::CustomController* GetCustomController();
		void FEXQmcgsIVfvGMLuLGRXIjWjIctl();
		void _ctor();
	};
}

