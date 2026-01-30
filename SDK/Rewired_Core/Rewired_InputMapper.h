#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC; };
namespace Rewired_Core::Rewired { struct InputMapper_Options; };
#include "Rewired_InputMapper_blxRdMQdKwGCNOalgAGXJcHWKdSz.h"
namespace Rewired_Core::Rewired::Utils { struct SafeDelegate; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct InputMapper_Context; };
#include "Rewired_InputMapper_Status.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired { struct InputMapper_InputMappedEventData; };
namespace Rewired_Core::Rewired { struct InputMapper_ErrorEventData; };
namespace Rewired_Core::Rewired { struct InputMapper_CanceledEventData; };
namespace Rewired_Core::Rewired { struct InputMapper_TimedOutEventData; };
namespace Rewired_Core::Rewired { struct InputMapper_StartedEventData; };
namespace Rewired_Core::Rewired { struct InputMapper_StoppedEventData; };
namespace Rewired_Core::Rewired { struct InputMapper_ConflictFoundEventData; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired
{
	struct InputMapper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t sLAMvwrnrSgmMaCpSSHlLRzRktEM;
		bool qUtFeVBvPwJwqVrKVgrAcCxcjZEo;
		Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC* uPLwTyKhDeAABmJYzIHQisMGbSG;
		Rewired_Core::Rewired::InputMapper_Options* pMjAlEWryYlKDKrpdBgxnCYulzg;
		mscorlib::System::Collections::Generic::Dictionary_2<Rewired_Core::Rewired::InputMapper_blxRdMQdKwGCNOalgAGXJcHWKdSz, Rewired_Core::Rewired::Utils::SafeDelegate>* UWhToiWScpHhgSCOnFMqhyXtTvX;
		struct StaticFields
		{
			Rewired_Core::Rewired::InputMapper* osuowjGAEXihMLbjXEAemmMAXTO;
			int32_t FUsFdmscBSrBSOObjhqlhhlZTfP;
			mscorlib::System::Action_1<mscorlib::System::Exception>* JrrAKmiteXJsCIezpbaGbNVhTmUa;
			mscorlib::System::Action_1<mscorlib::System::Exception>* tqkGzjZazosXvcMqqkRsaFXRIiS;
			mscorlib::System::Action_1<mscorlib::System::Exception>* EXHPAqkOihfUuTQBrHOCJkbUTgy;
			mscorlib::System::Action_1<mscorlib::System::Exception>* buDNmfAKAJmuFphmRGuKdPGdKrTu;
			mscorlib::System::Action_1<mscorlib::System::Exception>* DDznQPAfTxjsPrCYagaRuIKNsyi;
			mscorlib::System::Action_1<mscorlib::System::Exception>* gfuYTDVqGtxGTfuJJGoJXEFIMBI;
			mscorlib::System::Action_1<mscorlib::System::Exception>* tvJFAxvIepAKPfmTIRwIyCYQuWV;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Rewired_Core::Rewired::InputMapper* get_Default();
		static int32_t FWMrUkrJMCIMsCvVWyPTypWWhWi();
		Rewired_Core::Rewired::InputMapper_Options* get_options();
		void set_options(Rewired_Core::Rewired::InputMapper_Options* value);
		Rewired_Core::Rewired::InputMapper_Context* get_mappingContext();
		Rewired_Core::Rewired::InputMapper_Status get_status();
		float get_timeRemaining();
		int32_t get_id();
		void add_InputMappedEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::InputMapper_InputMappedEventData>* value);
		void remove_InputMappedEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::InputMapper_InputMappedEventData>* value);
		void add_ErrorEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::InputMapper_ErrorEventData>* value);
		void remove_ErrorEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::InputMapper_ErrorEventData>* value);
		void add_CanceledEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::InputMapper_CanceledEventData>* value);
		void remove_CanceledEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::InputMapper_CanceledEventData>* value);
		void add_TimedOutEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::InputMapper_TimedOutEventData>* value);
		void remove_TimedOutEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::InputMapper_TimedOutEventData>* value);
		void add_StartedEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::InputMapper_StartedEventData>* value);
		void remove_StartedEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::InputMapper_StartedEventData>* value);
		void add_StoppedEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::InputMapper_StoppedEventData>* value);
		void remove_StoppedEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::InputMapper_StoppedEventData>* value);
		void add_ConflictFoundEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::InputMapper_ConflictFoundEventData>* value);
		void remove_ConflictFoundEvent(mscorlib::System::Action_1<Rewired_Core::Rewired::InputMapper_ConflictFoundEventData>* value);
		void _ctor();
		void _ctor(bool isDefault);
		void RemoveEventListeners(mscorlib::System::Object* listenerOrParent);
		void RemoveAllEventListeners();
		void WMxTDDCTlZEKfBCuCaKIPiSkdVic(mscorlib::System::Object* A_1);
		void qCYPgacWRbBvCmharDDOdjOsBRjd();
		bool Start(Rewired_Core::Rewired::InputMapper_Context* mappingContext);
		void Stop();
		void Clear();
		bool kuVkVtmjAtGgvPHxoaDdAlMeprIY(Rewired_Core::Rewired::InputMapper_Context* A_1, Rewired_Core::Rewired::InputMapper_Options* A_2);
		static void OfpnJjisHrLtPOzOMgQLyfyvgxZ(mscorlib::System::Exception* A_0);
		static void dvRbBWrqSBXNKjlvOVBQDMRFuxI(mscorlib::System::Exception* A_0);
		static void CvtTaffhrKYYQrcHOBtgpyzdCNi(mscorlib::System::Exception* A_0);
		static void nwoQKTpBhymvESbpJroHyVmvQpC(mscorlib::System::Exception* A_0);
		static void PjMtBEHqRBpHtTipZVLoITZqmCo(mscorlib::System::Exception* A_0);
		static void FJogkyMhpaKnbBmXdhWidfCjeGQw(mscorlib::System::Exception* A_0);
		static void XBvxhLwIeVYiQXMMUuSjJaiVxIn(mscorlib::System::Exception* A_0);
		static void _cctor();
	};
}

