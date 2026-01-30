#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct VKPollAnswer; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKPoll : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _id_k__BackingField;
		int64_t _owner_id_k__BackingField;
		int64_t _created_k__BackingField;
		int32_t _is_closed_k__BackingField;
		mscorlib::System::String* _question_k__BackingField;
		int32_t _votes_k__BackingField;
		int64_t _answer_id_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPollAnswer>* _answers_k__BackingField;
		static Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPoll* Deserialize(mscorlib::System::Object* poll);
		int64_t get_id();
		void set_id(int64_t value);
		int64_t get_owner_id();
		void set_owner_id(int64_t value);
		int64_t get_created();
		void set_created(int64_t value);
		int32_t get_is_closed();
		void set_is_closed(int32_t value);
		mscorlib::System::String* get_question();
		void set_question(mscorlib::System::String* value);
		int32_t get_votes();
		void set_votes(int32_t value);
		int64_t get_answer_id();
		void set_answer_id(int64_t value);
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPollAnswer>* get_answers();
		void set_answers(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPollAnswer>* value);
		void _ctor();
	};
}

