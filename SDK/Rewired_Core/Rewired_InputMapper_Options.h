#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_InputMapper.h"
namespace Rewired_Core::Rewired { struct InputMapper; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_InputMapper_ConflictResponse.h"
namespace Rewired_Core::Rewired::Utils { struct SafeDelegate; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_ControllerPollingInfo.h"
namespace Rewired_Core::Rewired { struct ControllerPollingInfo; };
namespace mscorlib::System { template <typename T> struct Predicate_1; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace Rewired_Core::Rewired
{
	struct InputMapper_Options : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool MwICmYxCHCpjblidsnIqtjDJFBIk;
		bool QEDfjPgmjKcnkCKCAdUnOBkLJwvE;
		bool GIOjngrJcDCvUmRHLAnQVHsOBMK;
		float vWUTnhVXgnlOKvgxRxrxdJLbAcXF;
		bool KshcLSQWqpDEIHGTVIUCkunfHDAA;
		bool spPomHkbVoVDiRkvsetxMzxBItf;
		bool eSBiWqyeEnKHfgMQuRPmHiLXede;
		bool sARYEWqPAFftUJqWlaRKfbHextNR;
		IL2CPP::Array<int32_t>* cRXeQIrrCtBkdcZUOlzghDIwkcT;
		Rewired_Core::Rewired::InputMapper_ConflictResponse AEFnuEceVBrOXxvBbTPOIcqpjJZ;
		bool ZgtPIDFMIhzNvczezQJACvDEqzB;
		bool fBfVateglcEVcepejtKELYvvDKaU;
		bool pEFieSJFWSxueUsghQMdspMAHiX;
		bool sDzHRJuRBaGZxdDGSUaCRiqRHpzJ;
		float DEULaaJvjRkwrKKyjhUXombUIPVD;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Rewired_Core::Rewired::Utils::SafeDelegate>* YhOpnLAkHXFQbGBQUEhJrvfHTnS;
		struct StaticFields
		{
			mscorlib::System::String* jCJsMgspvGdlHgOcrgVfwraPggsd;
			mscorlib::System::Action_1<mscorlib::System::Exception>* fJPihfTvzXcqMIhWsoVhIBoSccU;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_allowAxes();
		void set_allowAxes(bool value);
		bool get_allowButtons();
		void set_allowButtons(bool value);
		bool get_allowButtonsOnFullAxisAssignment();
		void set_allowButtonsOnFullAxisAssignment(bool value);
		float get_timeout();
		void set_timeout(float value);
		bool get_checkForConflicts();
		void set_checkForConflicts(bool value);
		bool get_checkForConflictsWithAllPlayers();
		void set_checkForConflictsWithAllPlayers(bool value);
		bool get_checkForConflictsWithSelf();
		void set_checkForConflictsWithSelf(bool value);
		bool get_checkForConflictsWithSystemPlayer();
		void set_checkForConflictsWithSystemPlayer(bool value);
		IL2CPP::Array<int32_t>* get_checkForConflictsWithPlayerIds();
		void set_checkForConflictsWithPlayerIds(IL2CPP::Array<int32_t>* value);
		Rewired_Core::Rewired::InputMapper_ConflictResponse get_defaultActionWhenConflictFound();
		void set_defaultActionWhenConflictFound(Rewired_Core::Rewired::InputMapper_ConflictResponse value);
		bool get_ignoreMouseXAxis();
		void set_ignoreMouseXAxis(bool value);
		bool get_ignoreMouseYAxis();
		void set_ignoreMouseYAxis(bool value);
		bool get_allowKeyboardKeysWithModifiers();
		void set_allowKeyboardKeysWithModifiers(bool value);
		bool get_allowKeyboardModifierKeyAsPrimary();
		void set_allowKeyboardModifierKeyAsPrimary(bool value);
		float get_holdDurationToMapKeyboardModifierKeyAsPrimary();
		void set_holdDurationToMapKeyboardModifierKeyAsPrimary(float value);
		mscorlib::System::Predicate_1<Rewired_Core::Rewired::ControllerPollingInfo>* get_isElementAllowedCallback();
		void set_isElementAllowedCallback(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ControllerPollingInfo>* value);
		template <typename T> T* CQOsyICECtlOmArnDvQEXXwKQbN(mscorlib::System::String* A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CQOsyICECtlOmArnDvQEXXwKQbN");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)A_1;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		void _ctor();
		void _ctor(Rewired_Core::Rewired::InputMapper_Options* source);
		Rewired_Core::Rewired::InputMapper_Options* Clone();
		mscorlib::System::String* ToString();
		void YKZBMWjnxRgiKHTlqTUxBHLfkvNW();
		static void Copy(Rewired_Core::Rewired::InputMapper_Options* source, Rewired_Core::Rewired::InputMapper_Options* destination);
		static void gNyQbealEfgAZqfXUgdxPsUomjC(mscorlib::System::Exception* A_0);
	};
}

