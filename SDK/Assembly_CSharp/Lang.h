#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct Lang : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t current;
			IL2CPP::Array<IL2CPP::Array<mscorlib::System::String*>*>* txt;
			IL2CPP::Array<IL2CPP::Array<mscorlib::System::String*>*>* itemsNames;
			IL2CPP::Array<IL2CPP::Array<mscorlib::System::String*>*>* itemsDescs;
			IL2CPP::Array<IL2CPP::Array<mscorlib::System::String*>*>* missionTexts;
			IL2CPP::Array<IL2CPP::Array<mscorlib::System::String*>*>* animalsNames;
			IL2CPP::Array<IL2CPP::Array<mscorlib::System::String*>*>* storyHeaders;
			IL2CPP::Array<IL2CPP::Array<mscorlib::System::String*>*>* storyTexts;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void Init();
		static mscorlib::System::String* GetStoryHeader(int32_t id);
		static mscorlib::System::String* GetStoryText(int32_t id);
		static mscorlib::System::String* GetLabel(int32_t id);
		static mscorlib::System::String* GetAnimalName(int32_t id);
		static mscorlib::System::String* GetMissionTaskText(IL2CPP::Array<int32_t>* ids);
		static mscorlib::System::String* GetSeasonMissionText(int32_t _mID, int32_t tID);
		static mscorlib::System::String* GetDailyMissionText(int32_t mID);
		static mscorlib::System::String* GetTitle();
		static mscorlib::System::String* GetWeeks(int32_t c);
		static mscorlib::System::String* GetDays(int32_t c);
		static mscorlib::System::String* GetHours(int32_t c);
		static mscorlib::System::String* GetItemName(int32_t id);
		static mscorlib::System::String* GetItemDesc(int32_t id);
		static mscorlib::System::String* GetMapName(int32_t map_id);
		void _ctor();
		static void _cctor();
	};
}

