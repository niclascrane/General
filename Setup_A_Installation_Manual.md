# Setup A — Step-by-Step Installation and Commissioning Manual

**System basis:** 8 × 605 W PV modules (4.84 kWp), 1 × Pylontech US5000 battery, Victron MultiPlus-II 48/5000/70-50 inverter/charger, Victron SmartSolar MPPT 250/100, 230 V single-phase, 50 Hz. A 10 kW continuous generator is intended as an AC input source.

> **Safety and scope:** This document is a planning and commissioning guide, not a substitute for the current manuals for the exact product revisions or a site-specific electrical design. PV wiring can be live in daylight, and a 48 V battery can deliver extremely high fault current. Fixed AC wiring, protection selection, earthing/neutral design, testing and generator integration must be performed or supervised by a qualified electrician/solar installer in accordance with Portuguese requirements. Never work on live conductors.

## 1. Equipment and materials checklist

### Main equipment
- [ ] 1 × Victron MultiPlus-II 48/5000/70-50 inverter/charger
- [ ] 1 × Pylontech US5000 battery
- [ ] 8 × 605 W photovoltaic modules (4.84 kWp total)
- [ ] 1 × Victron SmartSolar MPPT 250/100 charge controller

### Protection, cabling and mounting
- [ ] PV mounting rails/structure, roof or ground fixings, module clamps and fasteners suitable for the site
- [ ] UV-resistant PV cable and connectors compatible with the module leads
- [ ] PV isolator and string fuses where required by the final design
- [ ] PV and AC surge protection where required by the site design and applicable rules
- [ ] Battery DC cables, correct lugs, DC fuse and holder/distribution equipment, and isolator where required
- [ ] Battery communication cable specified by the manufacturer for the chosen Victron/Pylontech architecture
- [ ] AC input and output cables, breakers, isolation and residual-current protection as required by the design
- [ ] Protective-earth and bonding conductors, enclosures, glands, conduit/trunking, labels and cable supports
- [ ] Optional compatible GX monitoring device (for example, Cerbo GX) if central monitoring is desired; confirm whether it is needed for the selected communications design

**Do not buy protection devices or cables by guesswork.** The final ratings and conductor cross-sections depend on actual cable lengths, installation method, ambient temperature, prospective fault current, PV module datasheet, and local rules.

## 2. Confirm the design before installation

1. Record the exact model numbers and hardware revisions of the inverter, MPPT, battery and PV modules.
2. Obtain the current installation manuals and datasheets for those exact products.
3. Draw a site-specific single-line diagram showing PV strings, MPPT, battery protection, inverter, generator input, AC output, distribution board, earthing, isolators and surge protection.
4. Confirm mounting location, ventilation, weather protection, maintenance access, cable routes and structural capacity.
5. Design the PV string arrangement using the exact module Voc, Vmp, Isc and Imp values and the site's minimum expected temperature. Verify cold-weather string Voc stays below the MPPT's absolute maximum and operating voltage remains within its permitted MPPT range. Do not infer a string layout from panel wattage alone.
6. Confirm the battery's permitted continuous charge/discharge current and the approved battery communication method. One US5000 may limit the power available from a 5 kVA-class inverter; configure and operate within the battery manufacturer's limits.
7. Confirm the generator's output voltage/frequency, earthing/neutral arrangement, continuous rating and any other loads sharing it. Define the AC input-current and charging limits before commissioning.

## 3. Prepare and mount equipment

1. Make the work area secure and keep the generator stopped. Isolate all AC sources and keep PV and battery isolators open while work is being carried out.
2. Mount the MultiPlus-II on a suitable surface with the clearances and orientation specified in its manual.
3. Mount the MPPT in a ventilated location, with short, correctly sized battery-side conductors.
4. Place and secure the US5000 as directed in its manual, allowing access to its terminals, breaker and communication ports.
5. Install labelled enclosures, isolators and protective devices in accessible positions. Keep PV DC, battery DC and AC wiring clearly separated and protected from mechanical damage.
6. Install the PV mounting structure according to the roof/ground design, wind loading and waterproofing requirements.
7. Fit the eight modules using the manufacturer's clamp zones and torque values. Support and secure the module leads; do not pull on connectors or step on modules.

## 4. Wire the PV array

1. Keep the PV array isolated from the MPPT while wiring is inspected.
2. Assemble the pre-designed series/parallel strings using compatible connectors and correct crimp tooling. Do not mate connectors from different manufacturers unless the manufacturers explicitly approve that combination.
3. Route PV cables in suitable UV-resistant support or conduit, protecting them from abrasion, standing water and sharp edges.
4. Label each string and record its module count and route.
5. A qualified installer should measure string open-circuit voltage and polarity with appropriately rated equipment, compare readings with expected values, and confirm the maximum cold-weather voltage calculation.
6. Keep the PV isolator open until the controller is configured and the final checks are complete.

## 5. Wire the battery and DC circuit

1. Keep the battery switched off and follow the Pylontech manual's required installation sequence.
2. Install the battery fuse, holder/distribution and DC isolation specified by the approved design. The protective device must be appropriate for the battery fault current and the cable.
3. Use the designed conductor size, cable length, insulation rating and lugs. Make terminations with the correct tools and torque to the value specified in the relevant manual.
4. Connect battery positive and negative to the designated DC equipment exactly as shown in the Victron and Pylontech manuals. Verify polarity before closing any breaker.
5. Follow the approved protective-earth and bonding design. Do not add an improvised battery-negative-to-earth bond.
6. Connect the specified Pylontech BMS communication cable to the correct ports for the chosen Victron architecture. Verify cable type and port assignments from the current manuals.
7. Record battery model, serial number, status indicators and any firmware details available to the installer.

## 6. Connect the MPPT

1. With PV isolated, confirm the controller's battery and PV terminals from its manual.
2. Connect the MPPT battery side through the designed DC protection, observing polarity and torque requirements.
3. Follow the MPPT manual's required connection order; this controller family generally needs the battery connection established before PV so it can detect system voltage.
4. Configure the approved battery settings and limits for the Pylontech US5000 and the selected BMS communication method. Do not use generic lithium settings or guess charge voltages.
5. Recheck PV string polarity and voltage. Only then close the PV isolator in accordance with the controller manual.
6. In daylight, confirm the controller reports plausible PV voltage, charging current and battery status.

## 7. Connect the MultiPlus-II AC circuits and generator

**Fixed AC wiring and generator integration are for a qualified installer.**

1. Keep the generator stopped and the AC input/output breakers open.
2. Connect generator AC to the MultiPlus-II AC input through correctly selected isolation and overcurrent protection.
3. Connect the MultiPlus-II AC output to the designated backed-up loads/distribution board through the approved protection arrangement.
4. Confirm protective-earth continuity and the correct neutral switching/bonding arrangement for inverter and generator modes. These details depend on the site design; do not guess or copy another installation.
5. Do not connect the inverter output in parallel with a utility supply or generator unless the approved design explicitly supports that mode and includes the required transfer/protection equipment.
6. Configure the AC input-current limit and charger-current limit so the generator is not overloaded, allowing for other generator loads and derating. A 10 kW nameplate rating alone does not determine the correct current setting.
7. Verify the generator's voltage and frequency are within the MultiPlus-II's permitted AC input range before enabling its input breaker.

## 8. Pre-commissioning checks

Before energising, the installer should verify and record:

- [ ] Equipment models match the design and manuals.
- [ ] Cable sizes, routes, terminations and terminal torque are documented.
- [ ] DC and AC polarity are correct.
- [ ] PV string layout, calculated cold-weather Voc, measured Voc and polarity are acceptable.
- [ ] Battery fuse, DC isolation, AC breakers, RCD/RCBO and surge protection match the approved design.
- [ ] Protective-earth continuity, insulation resistance and required protective-device tests pass.
- [ ] Neutral/earth arrangement is correct for all intended operating modes.
- [ ] Battery BMS communications and charge/discharge limits are configured.
- [ ] All conductors are enclosed or protected, terminals covered, and circuits labelled.
- [ ] The generator is stable and its input-current/charging limits are set conservatively.

## 9. Initial start-up

Follow the exact start-up order in the current manuals for the installed revisions. If a manufacturer-prescribed sequence differs from this overview, the manufacturer sequence takes precedence.

1. Confirm all loads are off or disconnected, PV is isolated, generator is stopped and AC breakers are open.
2. Enable the Pylontech battery using its documented procedure. Confirm normal status indication and no battery alarm.
3. Energise the MPPT from the battery side as specified in its manual. Confirm the correct battery voltage and settings.
4. Close the PV isolator and check for normal solar charging when sufficient daylight is available.
5. Start the MultiPlus-II using its documented procedure with AC input and output breakers initially open. Confirm normal status and no fault indication.
6. Enable the inverter output to a small, known test load. Confirm output voltage and frequency are within specification.
7. Start the generator according to its own manual and allow voltage/frequency to stabilise. After confirming the AC input is acceptable, enable the protected input circuit and verify that the MultiPlus-II recognises AC input.
8. Confirm charging and household loads together remain within the generator's configured input limit.

## 10. Configure and test the system

1. Use the appropriate Victron interface/software for the installed equipment. Record firmware versions and save a copy of the configuration.
2. Set the battery profile, charge voltage/current limits, low-state-of-charge behaviour and BMS communications according to current Pylontech/Victron guidance for the exact equipment.
3. Set the generator AC input-current limit conservatively. Include any other loads powered by the generator when setting the limit.
4. Test inverter operation with a small load, then increase loads in stages. Monitor AC output, battery current, state of charge, alarms and temperatures.
5. Test transfer to generator input and return to inverter operation under controlled conditions, following the manual.
6. Confirm monitoring displays plausible PV power, battery state of charge, AC input/output and daily energy.
7. Test all required protective devices and record results. Do not bypass a protection device to keep the system running.
8. If an alarm occurs, record its exact code and operating conditions. Stop and investigate persistent faults instead of repeatedly resetting them.

## 11. Normal operation and maintenance

- Check battery state of charge, inverter alarms and PV charging status periodically.
- Keep ventilation openings clear and keep equipment dry and free of dust accumulation.
- Inspect externally for cable damage, corrosion, water ingress, loose supports, heat marks or damaged PV modules.
- Do not tighten terminals while equipment is live. Isolate using the manufacturer's procedure and have a qualified person carry out electrical maintenance.
- When using the generator, start it according to its manual, allow it to stabilise, and verify the inverter's configured input limit before accepting the AC input.
- Record unusual behaviour, alarms, maintenance and configuration changes.

## 12. Safe shutdown for service

1. Notify users and shut down sensitive loads.
2. Stop the generator and isolate its AC output.
3. Isolate AC input and output, PV and battery following the shutdown sequence in the relevant manuals.
4. Remember that PV modules and conductors may remain live in daylight even when an isolator is open. A qualified person must verify safe conditions before touching conductors.
5. Wait the discharge time specified by each manufacturer and secure isolation against accidental re-energisation.

## 13. Commissioning and handover record

| Item | Record |
|---|---|
| Installer / company and date | ______________________________ |
| Inverter model, serial number and firmware | ______________________________ |
| MPPT model, serial number and firmware | ______________________________ |
| Battery model, serial number and status | ______________________________ |
| PV module model and number of modules | ______________________________ |
| PV string arrangement and calculated maximum Voc | ______________________________ |
| Measured PV string Voc and polarity | ______________________________ |
| Battery charge/discharge limits and BMS status | ______________________________ |
| Generator input-current and charger-current limits | ______________________________ |
| AC input voltage/frequency | ______________________________ |
| AC output voltage/frequency under test load | ______________________________ |
| Earthing, insulation and RCD test results | ______________________________ |
| Protection ratings and torque records | ______________________________ |
| Configuration backup location and handover notes | ______________________________ |

## 14. Manufacturer references

- [Victron MultiPlus-II — official product information and downloads](https://www.victronenergy.pt/inverters-chargers/multiplus-ii)
- [Victron SmartSolar MPPT 150/70 to 250/100 — official manual PDF](https://www.victronenergy.com/upload/documents/Manual_SmartSolar_MPPT_150-70_up_to_250-100_VE.Can/29694-MPPT_solar_charger_manual-pdf-en.pdf)
- [Pylontech US5000 — manufacturer downloads](https://www.pylontech.us/service/downloads?id=us5000)

**Document basis:** Setup A equipment list and the supplied appliance-load inventory. This is a general work sequence; the exact model-specific manuals, approved single-line diagram, site conditions and Portuguese requirements take precedence.
