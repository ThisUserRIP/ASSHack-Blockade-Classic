#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_Soundy_SoundDatabase.h"
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct SoundDatabase; };
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct SoundGroupData; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace System_Core::System::Linq { template <typename TKey, typename TElement> struct IGrouping_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Soundy
{
	struct SoundDatabase___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::Soundy::SoundDatabase___c* __9;
			mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData, mscorlib::System::String>* __9__17_0;
			mscorlib::System::Func_2<System_Core::System::Linq::IGrouping_2<mscorlib::System::String, Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData>, Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData>* __9__17_1;
			mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData, mscorlib::System::Boolean>* __9__18_0;
			mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData, mscorlib::System::String>* __9__20_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		mscorlib::System::String* _RemoveDuplicateEntries_b__17_0(Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData* data);
		Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData* _RemoveDuplicateEntries_b__17_1(System_Core::System::Linq::IGrouping_2<mscorlib::System::String, Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData>* n);
		bool _RemoveUnnamedEntries_b__18_0(Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData* data);
		mscorlib::System::String* _Sort_b__20_0(Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData* data);
	};
}

