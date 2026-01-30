#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "I2_Loc_Localize.h"
namespace Assembly_CSharp::I2::Loc { struct Localize; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace mscorlib::System { template <typename T> struct Predicate_1; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace System_Core::System::Linq { template <typename TKey, typename TElement> struct IGrouping_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::I2::Loc
{
	struct Localize___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::I2::Loc::Localize___c* __9;
			mscorlib::System::Predicate_1<UnityEngine_CoreModule::UnityEngine::Object>* __9__49_0;
			mscorlib::System::Func_2<UnityEngine_CoreModule::UnityEngine::Object, mscorlib::System::String>* __9__49_1;
			mscorlib::System::Func_2<System_Core::System::Linq::IGrouping_2<mscorlib::System::String, UnityEngine_CoreModule::UnityEngine::Object>, mscorlib::System::String>* __9__49_2;
			mscorlib::System::Func_2<System_Core::System::Linq::IGrouping_2<mscorlib::System::String, UnityEngine_CoreModule::UnityEngine::Object>, UnityEngine_CoreModule::UnityEngine::Object>* __9__49_3;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _UpdateAssetDictionary_b__49_0(UnityEngine_CoreModule::UnityEngine::Object* x);
		mscorlib::System::String* _UpdateAssetDictionary_b__49_1(UnityEngine_CoreModule::UnityEngine::Object* o);
		mscorlib::System::String* _UpdateAssetDictionary_b__49_2(System_Core::System::Linq::IGrouping_2<mscorlib::System::String, UnityEngine_CoreModule::UnityEngine::Object>* g);
		UnityEngine_CoreModule::UnityEngine::Object* _UpdateAssetDictionary_b__49_3(System_Core::System::Linq::IGrouping_2<mscorlib::System::String, UnityEngine_CoreModule::UnityEngine::Object>* g);
	};
}

