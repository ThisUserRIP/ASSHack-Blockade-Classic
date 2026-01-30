#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "I2_Loc_LanguageSourceData.h"
namespace Assembly_CSharp::I2::Loc { struct LanguageSourceData; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace mscorlib::System { template <typename T> struct Predicate_1; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace System_Core::System::Linq { template <typename TKey, typename TElement> struct IGrouping_2; };
namespace Assembly_CSharp::I2::Loc { struct TermData; };
namespace mscorlib::System { template <typename T> struct Comparison_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::I2::Loc
{
	struct LanguageSourceData___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::I2::Loc::LanguageSourceData___c* __9;
			mscorlib::System::Predicate_1<UnityEngine_CoreModule::UnityEngine::Object>* __9__39_0;
			mscorlib::System::Func_2<UnityEngine_CoreModule::UnityEngine::Object, mscorlib::System::String>* __9__39_1;
			mscorlib::System::Func_2<System_Core::System::Linq::IGrouping_2<mscorlib::System::String, UnityEngine_CoreModule::UnityEngine::Object>, mscorlib::System::String>* __9__39_2;
			mscorlib::System::Func_2<System_Core::System::Linq::IGrouping_2<mscorlib::System::String, UnityEngine_CoreModule::UnityEngine::Object>, UnityEngine_CoreModule::UnityEngine::Object>* __9__39_3;
			mscorlib::System::Comparison_1<Assembly_CSharp::I2::Loc::TermData>* __9__43_0;
			mscorlib::System::Comparison_1<Assembly_CSharp::I2::Loc::TermData>* __9__47_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _UpdateAssetDictionary_b__39_0(UnityEngine_CoreModule::UnityEngine::Object* x);
		mscorlib::System::String* _UpdateAssetDictionary_b__39_1(UnityEngine_CoreModule::UnityEngine::Object* o);
		mscorlib::System::String* _UpdateAssetDictionary_b__39_2(System_Core::System::Linq::IGrouping_2<mscorlib::System::String, UnityEngine_CoreModule::UnityEngine::Object>* g);
		UnityEngine_CoreModule::UnityEngine::Object* _UpdateAssetDictionary_b__39_3(System_Core::System::Linq::IGrouping_2<mscorlib::System::String, UnityEngine_CoreModule::UnityEngine::Object>* g);
		int32_t _Export_I2CSV_b__43_0(Assembly_CSharp::I2::Loc::TermData* a, Assembly_CSharp::I2::Loc::TermData* b);
		int32_t _Export_CSV_b__47_0(Assembly_CSharp::I2::Loc::TermData* a, Assembly_CSharp::I2::Loc::TermData* b);
	};
}

