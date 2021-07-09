<?xml version="1.0" encoding="ASCII"?>
<ResourceModel:App xmi:version="2.0" xmlns:xmi="http://www.omg.org/XMI" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:ResourceModel="http://www.infineon.com/Davex/Resource.ecore" name="EVENT_GENERATOR" URI="http://resources/4.1.14/app/EVENT_GENERATOR/0" description="Provides the configuration for Output Gating Unit of ERU" version="4.1.14" minDaveVersion="4.0.0" instanceLabel="EVENT_GENERATOR_0" appLabel="">
  <properties provideInit="true" sharable="true"/>
  <virtualSignals name="pattern" URI="http://resources/4.1.14/app/EVENT_GENERATOR/0/vs_event_generator_pdin" hwSignal="pdin" hwResource="//@hwResources.0" visible="true">
    <upwardMapList xsi:type="ResourceModel:Connections" href="../../EVENT_DETECTOR/v4_0_6/EVENT_DETECTOR_1.app#//@connections.0"/>
  </virtualSignals>
  <virtualSignals name="trigger_in" URI="http://resources/4.1.14/app/EVENT_GENERATOR/0/vs_event_generator_trin" hwSignal="trin" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="pdout" URI="http://resources/4.1.14/app/EVENT_GENERATOR/0/vs_event_generator_pdout" hwSignal="pdout" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="ogu_iout" URI="http://resources/4.1.14/app/EVENT_GENERATOR/0/vs_event_generator_iout" hwSignal="iout" hwResource="//@hwResources.0"/>
  <virtualSignals name="erunmi_in" URI="http://resources/4.1.14/app/EVENT_GENERATOR/0/vs_event_generator_erunmi_in" hwSignal="in" hwResource="//@hwResources.1"/>
  <virtualSignals name="iout" URI="http://resources/4.1.14/app/EVENT_GENERATOR/0/vs_event_generator_erunmi_out" hwSignal="out" hwResource="//@hwResources.1" visible="true"/>
  <hwResources name="ogu" URI="http://resources/4.1.14/app/EVENT_GENERATOR/0/hwres_eru_ogu" resourceGroupUri="peripheral/eru/*/ogu/*" mResGrpUri="peripheral/eru/*/ogu/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/eru1/eru1_1.dd#//@provided.13"/>
  </hwResources>
  <hwResources name="erunmi" URI="http://resources/4.1.14/app/EVENT_GENERATOR/0/hwres_scu_gcu_interrupt_erunmi" resourceGroupUri="peripheral/scu/*/gcu/interrupt/erunmi/*" mResGrpUri="peripheral/scu/*/gcu/interrupt/erunmi/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/SCU/SCU_0.dd#//@provided.17"/>
  </hwResources>
  <connections URI="http://resources/4.1.14/app/EVENT_GENERATOR/0/http://resources/4.1.14/app/EVENT_GENERATOR/0/vs_event_generator_iout/http://resources/4.1.14/app/EVENT_GENERATOR/0/vs_event_generator_erunmi_in" systemDefined="true" sourceSignal="ogu_iout" targetSignal="erunmi_in" srcVirtualSignal="//@virtualSignals.3" targetVirtualSignal="//@virtualSignals.4"/>
  <connections URI="http://resources/4.1.14/app/EVENT_GENERATOR/0/http://resources/4.1.14/app/EVENT_GENERATOR/0/vs_event_generator_pdout/http://resources/4.0.22/app/PWM_SVM/0/vs_pwm_svm_gp2_unsync_currenttrig" sourceSignal="pdout" targetSignal="trigger_trap" srcVirtualSignal="//@virtualSignals.2">
    <downwardMapList xsi:type="ResourceModel:VirtualSignal" href="../../PWM_SVM/v4_0_22/PWM_SVM_0.app#//@virtualSignals.11"/>
    <targetVirtualSignal href="../../PWM_SVM/v4_0_22/PWM_SVM_0.app#//@virtualSignals.11"/>
  </connections>
</ResourceModel:App>
