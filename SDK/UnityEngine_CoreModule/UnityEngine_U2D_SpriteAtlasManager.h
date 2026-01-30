#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine::U2D { struct SpriteAtlas; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::U2D
{
	struct SpriteAtlasManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Action_2<mscorlib::System::String, mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlas>>* atlasRequested;
			mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlas>* atlasRegistered;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool RequestAtlas(mscorlib::System::String* tag);
		static void add_atlasRegistered(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlas>* value);
		static void remove_atlasRegistered(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlas>* value);
		static void PostRegisteredAtlas(UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlas* spriteAtlas);
		static void Register(UnityEngine_CoreModule::UnityEngine::U2D::SpriteAtlas* spriteAtlas);
		static void _cctor();
	};
}

