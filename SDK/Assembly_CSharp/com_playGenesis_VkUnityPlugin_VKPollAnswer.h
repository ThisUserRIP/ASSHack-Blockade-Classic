#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKPollAnswer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _id_k__BackingField;
		mscorlib::System::String* _text_k__BackingField;
		int32_t _votes_k__BackingField;
		double _rate_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPollAnswer* Dererialize(mscorlib::System::Object* answer);
		int64_t get_id();
		void set_id(int64_t value);
		mscorlib::System::String* get_text();
		void set_text(mscorlib::System::String* value);
		int32_t get_votes();
		void set_votes(int32_t value);
		double get_rate();
		void set_rate(double value);
		void _ctor();
	};
}

