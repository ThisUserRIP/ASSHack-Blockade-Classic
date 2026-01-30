#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired { struct AxisCalibration; };
namespace Rewired_Core::Rewired::Internal { struct StandaloneAxis_AxisValueChangedEventHandler; };
namespace Rewired_Core::Rewired::Internal { struct StandaloneAxis_ButtonDownEventHandler; };
namespace Rewired_Core::Rewired::Internal { struct StandaloneAxis_ButtonUpEventHandler; };
namespace Rewired_Core::Rewired::Internal { struct StandaloneAxis_ButtonValueChangedEventHandler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired::Internal
{
	struct StandaloneAxis : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float _buttonActivationThreshold;
		Rewired_Core::Rewired::AxisCalibration* _calibration;
		float _valueRaw;
		float _valueRawPrev;
		Rewired_Core::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler* YrwuzkvmRMGOeyRmPOoTiFoBsKU;
		Rewired_Core::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler* yHaeaACssvGeLzMepGEVNttakjb;
		Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler* pEWFBDjjdwjhEZbIQMOUMjoYGTCO;
		Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler* RlxEZOURVqVEErJUhBSwfIaqFna;
		Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler* RqQjbhGeqKcUAPaCgcORBzWrlfhM;
		Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler* TgQxTrWCZecvzoEzFWvfKwLwpWX;
		Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler* IDXndhqJaXOlppkcjXWYzLmmyWV;
		Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler* CXezdDeGbvBAJDkicRxNRFzQfiH;
		float get_buttonActivationThreshold();
		void set_buttonActivationThreshold(float value);
		Rewired_Core::Rewired::AxisCalibration* get_calibration();
		void pIfpxmbMShAccegURuKkQGiUhAL(Rewired_Core::Rewired::AxisCalibration* A_1);
		float get_valueRaw();
		void FWkgHINIVSstrXVwiTKScjrlrbQ(float A_1);
		float get_valueRawPrev();
		void EgIOoqijqtAqXXzfNovkjfSCmrW(float A_1);
		float get_valueRawDelta();
		float get_value();
		float get_valuePrev();
		float get_valueDelta();
		bool get_rawButtonValue();
		bool get_rawButtonValuePrev();
		bool get_buttonValue();
		bool get_buttonValuePrev();
		float get_rawMin();
		float get_rawMax();
		float get_rawZero();
		void SaBaamXqDBLKVrgEsZcJJYQHckn(Rewired_Core::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler* A_1);
		void nIuUmoJldJmUNZSqejWYufgDaNC(Rewired_Core::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler* A_1);
		void add_AxisValueChangedEvent(Rewired_Core::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler* value);
		void remove_AxisValueChangedEvent(Rewired_Core::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler* value);
		void cNZBDPeedsqMiQpDYZozmqXnTPu(Rewired_Core::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler* A_1);
		void FrJKEvtnFvysTEAunTWtLIWZPDM(Rewired_Core::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler* A_1);
		void add_RawAxisValueChangedEvent(Rewired_Core::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler* value);
		void remove_RawAxisValueChangedEvent(Rewired_Core::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler* value);
		void zKIFBuvteEsofsoQVfaVhbsGsJiB(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler* A_1);
		void KWePBNtwiosFcjvHJcgMMZPbSDd(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler* A_1);
		void add_ButtonDownEvent(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler* value);
		void remove_ButtonDownEvent(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler* value);
		void hYiwQhBNMinqnPhpyOVIpltrYvH(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler* A_1);
		void ZbOTKfDmPEjqqkMOfXiZCoYLCnas(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler* A_1);
		void add_ButtonUpEvent(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler* value);
		void remove_ButtonUpEvent(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler* value);
		void xmmdZsynpCKWMhtNOhonEKliEC(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler* A_1);
		void fHvBvFimCfZWphhRloZyHTCpjtf(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler* A_1);
		void add_ButtonValueChangedEvent(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler* value);
		void remove_ButtonValueChangedEvent(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler* value);
		void xPgePBbeOTYvGhwgfEpQHAVHxMVr(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler* A_1);
		void EKILthDOZNNBgukWMTHFOlTnVig(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler* A_1);
		void add_RawButtonDownEvent(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler* value);
		void remove_RawButtonDownEvent(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler* value);
		void UQsSOishRcbDVqsoCFeNdCPbpjC(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler* A_1);
		void ELSSrPlYKPFbyObvKXMtEgJhwod(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler* A_1);
		void add_RawButtonUpEvent(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler* value);
		void remove_RawButtonUpEvent(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler* value);
		void XdHRrFtlNzmmZonBaAoDaGZgOJEP(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler* A_1);
		void nTTVufCKTKafTtafWDnTITfRadvC(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler* A_1);
		void add_RawButtonValueChangedEvent(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler* value);
		void remove_RawButtonValueChangedEvent(Rewired_Core::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler* value);
		void _ctor();
		void SetRawValue(float value);
		void Clear();
		static Rewired_Core::Rewired::Internal::StandaloneAxis* CreateRelative();
	};
}

